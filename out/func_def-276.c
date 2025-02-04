#include <stdio.h>

#include <stdlib.h>

# 1 
int decToBinRev(int n, int binary[]) {
 unsigned int i=1;
 unsigned int x=0;
 int y=0;
 while(i<=n) {
  i*=2;
  x++;
 }
 i/=2;
 x--;
 for(y=(int)x;y>=0;y--) {
  if((n-(int)i)>=0) {
   n-=(int)i;
   binary[y]=1;
  } else {
   binary[y]=0;
  }
  i/=2;
 }
 return (int)x;
}