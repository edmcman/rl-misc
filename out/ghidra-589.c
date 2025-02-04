#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <stdlib.h>

#include <unistd.h>

#include <time.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

#include <ctype.h>

# 1 
bool func0(int *param_1){int iVar1;iVar1 = *param_1;*param_1 = -1;shutdown(iVar1,2);iVar1 = close(iVar1);return iVar1 == 0;}