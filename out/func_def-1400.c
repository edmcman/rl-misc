#include <stdio.h>

#include <math.h>

# 1 
void caldat(long julian, int *mm, int *id, int *iyyy)
{
 long ja,jalpha,jb,jc,jd,je;

 if (julian >= 2299161) {
  jalpha=(long)(((double) (julian-1867216)-0.25)/36524.25);
  ja=julian+1+jalpha-(long) (0.25*jalpha);
 } else if (julian < 0) {
  ja=julian+36525*(1-julian/36525);
 } else
  ja=julian;
 jb=ja+1524;
 jc=(long)(6680.0+((double) (jb-2439870)-122.1)/365.25);
 jd=(long)(365*jc+(0.25*jc));
 je=(long)((jb-jd)/30.6001);
 *id=jb-jd-(long) (30.6001*je);
 *mm=je-1;
 if (*mm > 12) *mm -= 12;
 *iyyy=jc-4715;
 if (*mm > 2) --(*iyyy);
 if (*iyyy <= 0) --(*iyyy);
 if (julian < 0) iyyy -= 100*(1-julian/36525);
}