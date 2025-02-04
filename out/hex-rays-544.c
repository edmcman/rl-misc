#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/epoll.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int a2)
{
_DWORD *result; // rax
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 9; ++i )
{
result = (_DWORD *)*(unsigned int *)(4LL * i + a1);
if ( a2 == (_DWORD)result )
{
result = (_DWORD *)(4LL * i + a1);
*result = 0;
}
}
return result;
}