#include <poll.h>

#include <sys/socket.h>

#include <inttypes.h>

#include <endian.h> // for be64toh

#include <unistd.h>

#include <errno.h>

# 1 
void func0(long param_1,int param_2){close(*(int *)(param_1 + (long)param_2 * 8));*(undefined4 *)(param_1 + (long)param_2 * 8) = 0xffffffff;return;}