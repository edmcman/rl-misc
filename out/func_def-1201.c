#include <ctype.h>

#include <dirent.h>

#include <errno.h>

#include <grp.h>

#include <limits.h>  /* required by FreeBSD to define PATH_MAX */

#include <pwd.h>

#include <signal.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <syslog.h>

#include <time.h>

#include <unistd.h>

#include <arpa/inet.h>

#include <netinet/in.h>  /* required by FreeBSD to define in6addr_any */

#include <netinet/tcp.h>

#include <sys/uio.h>     /* writev() */

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/wait.h>  /* WEXITSTATUS */

# 1 
static void RemoveDoubleChar(char *string, char ch) {
  char chstr[3] = {0, 0, 0};
  char *occur;
  chstr[0] = ch;
  chstr[1] = ch;
  for (;;) {
    occur = strstr(string, chstr);
    if (occur == NULL) break;
    while (*occur != 0) {
      *occur = occur[1];
      occur += 1;
    }
  }
}