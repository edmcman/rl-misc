#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <termios.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10, __int64 a11, __int64 a12, __int64 a13, int a14)
{
if ( a3 )
{
a7 = (unsigned int)a7 & 0xFFFFFA84;
HIDWORD(a8) &= 0xFFFF7FB4;
LODWORD(a8) = a8 & 0xFFFFFECF | 0x30;
HIBYTE(a9) = 1;
BYTE6(a9) = 0;
}
else
{
HIDWORD(a8) &= 0xFFFFFFFD;
}
*(_QWORD *)a1 = a7;
*(_QWORD *)(a1 + 8) = a8;
*(_QWORD *)(a1 + 16) = a9;
*(_QWORD *)(a1 + 24) = a10;
*(_QWORD *)(a1 + 32) = a11;
*(_QWORD *)(a1 + 40) = a12;
*(_QWORD *)(a1 + 48) = a13;
*(_DWORD *)(a1 + 56) = a14;
return a1;
}