#include <linux/kernel.h>

#include <linux/module.h>

#include <linux/errno.h>

# 1 
static void swap_2x3_rows(unsigned short m[2][3])
{
 unsigned short tmp0;
 int cnt;

 for (cnt = 0; cnt < 3; cnt++) {
  tmp0 = m[0][cnt];
  m[0][cnt] = m[1][cnt];
  m[1][cnt] = tmp0;
 }
}