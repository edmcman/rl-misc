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
void func0(double param_1,double *param_2){if (param_1 < *param_2) {*param_2 = param_1;}if (*param_2 < (double)((ulong)param_1 ^ DAT_00100070)) {*param_2 = (double)((ulong)param_1 ^ DAT_00100070);}return;}