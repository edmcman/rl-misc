#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
int another_search(int a[], int len, int key)
{
 int ret = len;
 a[0] = key;
 while (a[ret] != key)
  ret--;
 return ret;
}