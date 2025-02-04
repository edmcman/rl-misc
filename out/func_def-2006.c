#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/time.h>

#include <sys/resource.h>

#include <sys/stat.h>

#include <signal.h>

#include <unistd.h>

#include <X11/Xlib.h>

#include <X11/cursorfont.h>

# 1 
int vis5d_color_table_init_params( float params[], int rgb_flag, int alpha_flag )
{
   if (rgb_flag) {
      params[0] = 1.4;
      params[1] = 1.0;
   }
   if (alpha_flag) {
      params[2] = 2.0;
   }
   return 0;
}