#include <sys/mount.h>

#include <sys/stat.h>

#include <sys/statvfs.h>

#include <sys/wait.h>

#include <linux/limits.h>

#include <fnmatch.h>

#include <glob.h>

#include <dirent.h>

#include <errno.h>

#include <fcntl.h>

#include <sys/utsname.h>

# 1 
static int get_mount_flags(const char *path, unsigned long *flags) {
 struct statvfs buf;

 if (statvfs(path, &buf) < 0)
  return -errno;
 *flags = buf.f_flag;
 return 0;
}