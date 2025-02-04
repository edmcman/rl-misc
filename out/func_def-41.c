#include <ctype.h>

#include <stdarg.h>

#include <dirent.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <time.h>

# 1 
extern int satsys(int sat, int* prn) {
  int sys = 0x00;
  if (sat <= 0 || ((32 - 1 + 1) + (24 - 1 + 1) + 0 + 0 + (35 - 1 + 1) + (142 - 120 + 1) + 0) < sat) {
    sat = 0;
  } else if (sat <= (32 - 1 + 1)) {
    sys = 0x01;
    sat += 1 - 1;
  } else if ((sat -= (32 - 1 + 1)) <= (24 - 1 + 1)) {
    sys = 0x04;
    sat += 1 - 1;
  } else if ((sat -= (24 - 1 + 1)) <= 0) {
    sys = 0x08;
    sat += 0 - 1;
  } else if ((sat -= 0) <= 0) {
    sys = 0x10;
    sat += 0 - 1;
  } else if ((sat -= 0) <= (35 - 1 + 1)) {
    sys = 0x20;
    sat += 1 - 1;
  } else if ((sat -= (35 - 1 + 1)) <= 0) {
    sys = 0x40;
    sat += 0 - 1;
  } else if ((sat -= 0) <= (142 - 120 + 1)) {
    sys = 0x02;
    sat += 120 - 1;
  } else {
    sat = 0;
  }
  if (prn) {
    *prn = sat;
  }
  return sys;
}