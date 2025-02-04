#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
static unsigned int uInt16Number(unsigned char buf[2])
  {
  return (buf[1] << 8) | buf[0];
  }