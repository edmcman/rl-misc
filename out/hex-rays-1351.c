#include <stdio.h> // fputc(), etc

#include <stdlib.h> // exit()

#include <unistd.h> // write(), lseek()

#include <string.h> // strncmp(), strlen()

#include <fcntl.h> // open(), fcntl()

#include <sys/stat.h> // S_IRUSR, S_IWUSR

#include <math.h> // log()

# 1 
#include "defs.h"
__int64  func0(int a1, _QWORD *a2)
{
int v2; // eax
char buf; // [rsp+13h] [rbp-Dh] BYREF
unsigned int v5; // [rsp+14h] [rbp-Ch]
unsigned __int64 v6; // [rsp+18h] [rbp-8h]

v6 = __readfsqword(0x28u);
*a2 = 0LL;
v5 = 0;
do
{
*a2 <<= 7;
v2 = read(a1, &buf, 1uLL);
v5 += v2;
*a2 += buf & 0x7F;
}
while ( buf < 0 );
return v5;
}