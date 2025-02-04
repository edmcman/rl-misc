#include <fcntl.h>

#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

# 1 
int mmapClose(float *addr, const char *filename, char create, long count) {
 if (create) {
  unlink(filename);
 }

 return munmap((void*)addr, sizeof(float) * count);
}