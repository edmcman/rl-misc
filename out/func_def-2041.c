#include <sys/types.h>

#include <sys/ipc.h>

#include <sys/shm.h>

#include <unistd.h>

#include <fcntl.h>

#include <errno.h>

# 1 
static void
shm_channel_fd_safe_close (int *fd_var)
{
  if (*fd_var != -1)
    {
      close (*fd_var);
      *fd_var = -1;
    }
}