#include <stdio.h>

#include <stdlib.h>

#include <sys/ioctl.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <sys/select.h>

#include <unistd.h>

#include <sys/resource.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
int i; // [rsp+18h] [rbp-4h]

for ( i = 0; i < a2; ++i )
{
if ( *(char *)(i + a1) > 96 && *(char *)(i + a1) <= 122 )
*(_BYTE *)(i + a1) -= 32;
}
return 0LL;
}