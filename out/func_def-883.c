#include <arpa/inet.h>

#include <errno.h>

#include <grp.h>

#include <pwd.h>

#include <stdio.h>

#include <stdlib.h>

#include <syslog.h>

#include <sys/poll.h>

#include <sys/signal.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <termios.h>

#include <unistd.h>

# 1 
int cfsetospeed(struct termios *termios_p, speed_t speed) {
  termios_p->c_ospeed = speed;
  return 0;
}