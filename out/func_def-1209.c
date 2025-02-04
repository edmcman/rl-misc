#include <stdio.h>

#include <linux/rtc.h>

#include <sys/ioctl.h>

#include <sys/syscall.h>

#include <sys/time.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <errno.h>

#include <string.h>

#include <getopt.h>

# 1 
void real_time_2_tm(int year, int mon, int mday, int hour, int min, int sec,
  struct rtc_time *tm)
{
 tm->tm_year = year - (1900);
 tm->tm_mon = mon;
 tm->tm_mday = mday;
 tm->tm_hour = hour;
 tm->tm_min = min;
 tm->tm_sec = sec;
}