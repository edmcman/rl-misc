#include <stddef.h>

#include <stdarg.h>

#include <limits.h>

#include <math.h>

#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <setjmp.h>

#include <errno.h>

#include <time.h>

# 1 
static int computesizes(int nums[],int*narray){
int i;
int twotoi;
int a=0;
int na=0;
int n=0;
for(i=0,twotoi=1;twotoi/2<*narray;i++,twotoi*=2){
if(nums[i]>0){
a+=nums[i];
if(a>twotoi/2){
n=twotoi;
na=a;
}
}
if(a==*narray)break;
}
*narray=n;
return na;
}