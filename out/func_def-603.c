#include <stdio.h>

# 1 
int exgcd(int a,int b,int *x,int *y){
 if (b==0){
  *x=1;*y=0;
  return a;
 }
 int r=exgcd(b,a%b,y,x);
 *y-=(*x)*(a/b);
 return r;
}