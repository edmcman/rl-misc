#include <math.h>

# 1 
int CTA_DateTime_DaysToHMS (double days, int *h, int *m, int *s){
   int hour, minute, second;

   second = (int)(86400 * days);

   hour = second/3600;

   second = second - 3600*hour;

   minute = second/60;

   second = second - 60*minute;

   *h = hour;
   *m = minute;
   *s = second;

   return ( 0);
}