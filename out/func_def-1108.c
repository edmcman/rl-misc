#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
static unsigned int uInt32Number(unsigned char buf[4])
  {
  unsigned numb = buf[3];
  numb = (numb << 8) | buf[2];
  numb = (numb << 8) | buf[1];
  numb = (numb << 8) | buf[0];
  return numb;
  }