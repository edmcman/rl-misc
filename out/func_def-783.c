#include <stddef.h>

# 1 
void tea_decode(int* v,int* k)
{
 unsigned int n=32, sum, y=v[0], z=v[1],
  delta=0x9e3779b9 ;
 sum=delta<<5 ;

 while (n-->0) {
  z-= (y<<4)+k[2] ^ y+sum ^ (y>>5)+k[3] ;
  y-= (z<<4)+k[0] ^ z+sum ^ (z>>5)+k[1] ;
  sum-=delta ; }

 v[0]=y ; v[1]=z ;
}