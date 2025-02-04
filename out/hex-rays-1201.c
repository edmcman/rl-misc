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
#include "defs.h"
unsigned __int64  func0(const char *a1, char a2)
{
char *v3; // [rsp+18h] [rbp-18h]
char needle[2]; // [rsp+25h] [rbp-Bh] BYREF
char v5; // [rsp+27h] [rbp-9h]
unsigned __int64 v6; // [rsp+28h] [rbp-8h]

v6 = __readfsqword(0x28u);
v5 = 0;
needle[0] = a2;
needle[1] = a2;
while ( 1 )
{
v3 = strstr(a1, needle);
if ( !v3 )
break;
while ( *v3 )
{
*v3 = v3[1];
++v3;
}
}
return __readfsqword(0x28u) ^ v6;
}