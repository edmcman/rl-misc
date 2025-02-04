#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <signal.h>

#include <math.h>

#include <unistd.h>

#include <termios.h>

#include <fcntl.h>

#include <sys/signal.h>

#include <sys/types.h>

#include <sys/time.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

# 1 
int
writeData( int fd, unsigned char *buf, int nChars )
{
  int written = 0;
  while (nChars > 0) {
    written = write( fd, buf, nChars );
    if (written < 0) {
      return 0;
    } else {
      nChars -= written;
      buf += written;
    }
    usleep(1000);
  }
  return 1;
}