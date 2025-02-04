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
void func0(char *param_1,undefined param_2){long in_FS_OFFSET;char *local_20;char local_13;undefined uStack_12;undefined local_11;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_11 = 0;_local_13 = CONCAT11(param_2,param_2);while (local_20 = strstr(param_1,&local_13), local_20 != (char *)0x0) {for (; *local_20 != '\0'; local_20 = local_20 + 1) {*local_20 = local_20[1];}}if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return;}/* WARNING: Subroutine does not return */__stack_chk_fail();}