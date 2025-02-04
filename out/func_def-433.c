#include <stdio.h>

#include <unistd.h>

#include <sys/param.h>

#include <sys/fcntl.h>

#include <dirent.h>

# 1 
void zfs_seekdir(DIR *dirp, long loc)
{
 seekdir(dirp, loc);
}