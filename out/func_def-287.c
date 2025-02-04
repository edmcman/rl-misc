#include <sys/inotify.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

# 1 
int
init_inotify(const char *filename, int *ifd, int *iwfd) {
 if ((*ifd = inotify_init()) < 0) {
  return -1;
 }
 if ((*iwfd = inotify_add_watch(*ifd, filename, IN_MODIFY
                                              | IN_DELETE_SELF
                                              | IN_MOVE_SELF
                                              | IN_UNMOUNT)) < 0) {
  return -1;
 }
 return 0;
}