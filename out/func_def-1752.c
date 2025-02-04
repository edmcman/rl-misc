#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <linux/fb.h>

#include <linux/types.h>

#include <linux/videodev2.h>

#include <sys/ioctl.h>

#include <sys/mman.h>

# 1 
static void rgb_to_yuv(unsigned int rgb1, unsigned int rgb2, unsigned int *yuv,
         int bpp, unsigned char swap_color)
{
 static unsigned int YKr, YKg, YKb;
 static unsigned int CrKr, CrKg, CrKb;
 static unsigned int CbKr, CbKg, CbKb;
 unsigned int A, R, G, B;
 unsigned int Y, Cb, Cr;
 unsigned int yuv_pix;

 YKr = 29900;
 YKg = 58700;
 YKb = 11400;
 CrKr = 49980;
 CrKg = 41850;
 CrKb = 8128;
 CbKr = 16868;
 CbKg = 33107;
 CbKb = 49970;

 A = (rgb1 & 0xFF000000) >> 24;
 R = (rgb1 & 0x00FF0000) >> 16;
 G = (rgb1 & 0x0000FF00) >> 8;
 B = (rgb1 & 0x000000FF) >> 0;

 Y = ((YKr * (R & 0xFF)) + (YKg * (G & 0xFF)) + (YKb * (B & 0xFF)))
  / 100000;
 Cb = ((-CbKr * (R & 0xFF)) - (CbKg * (G & 0xFF)) + (CbKb * (B & 0xFF))
  + 12800000) / 100000;
 Cr = ((CrKr * (R & 0xFF)) - (CrKg * (G & 0xFF)) - (CrKb * (B & 0xFF))
  + 12800000) / 100000;

 if (swap_color)
  yuv_pix = (A << 24) | (Cr << 16) | (Cb << 8) | Y;
 else
  yuv_pix = (A << 24) | (Y << 16) | (Cb << 8) | Cr;

 if (bpp == 16)
 {
  R = (rgb2 & 0x00FF0000) >> 16;
  G = (rgb2 & 0x0000FF00) >> 8;
  B = (rgb2 & 0x000000FF) >> 0;
  Y = ((YKr * (R & 0xFF)) + (YKg * (G & 0xFF)) + (YKb * (B & 0xFF)))
   / 100000;
  if (swap_color)
  {
   yuv_pix &= 0xFF;
   yuv_pix <<= 8;
   yuv_pix |= ((Y << 24) | (Cr << 16) | Cb);
  }
  else
  {
   yuv_pix >>= 16;
   yuv_pix &= 0xFF;
   yuv_pix |= ((Cr << 24) | (Y << 16) | (Cb << 8));
  }
 }
 *yuv = yuv_pix;
}