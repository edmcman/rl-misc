#include <errno.h>

#include <math.h>

#include <signal.h>

#include <stdarg.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/select.h>

#include <sys/time.h>

#include <syslog.h>

#include <time.h>

#include <unistd.h>

# 1 
static void cap(double* x, double limit) {
  if (*x > limit)
    *x = limit;
  if (*x < -limit)
    *x = -limit;
}