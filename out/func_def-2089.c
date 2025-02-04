#include <linux/errno.h>

#include <linux/fs.h>

#include <linux/adfs_fs.h>

#include <linux/sched.h>

#include <linux/stat.h>

# 1 
int adfs_readname (char *buf, char *ptr, int maxlen)
{
 int size = 0;
 while (*ptr >= ' ' && maxlen--) {
  switch (*ptr) {
  case '/':
   *buf++ = '.';
   break;
  default:
   *buf++ = *ptr;
   break;
  }
  ptr++;
  size ++;
 }
 *buf = '\0';
 return size;
}