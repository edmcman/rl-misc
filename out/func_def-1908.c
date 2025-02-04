#include <stdio.h>

#include <stdlib.h>

# 1 
void gira (int *a)
{
int c[4];

int i;
int j=0;

for (i=0; i<4; i++) c[i]=a[i];
for (i=4; i>0; i--){
a[i-1]=c[j];
j++;
}

}