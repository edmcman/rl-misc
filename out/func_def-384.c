#include <poll.h>

#include <sys/socket.h>

#include <inttypes.h>

#include <endian.h> // for be64toh

#include <unistd.h>

#include <errno.h>

# 1 
static void kill_client(struct pollfd *cli, int i)
{
  close((cli + i)->fd);
  (cli + i)->fd = -1;
}