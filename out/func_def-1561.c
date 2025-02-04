#include <stdlib.h>

#include <assert.h>

#include <sys/eventfd.h>

#include <errno.h>

#include <unistd.h>

# 1 
void nxe_eventfd_close(int* fd) {
  close(*fd);
  *fd=0;
}