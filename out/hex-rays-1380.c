#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <fcntl.h>

#include <termios.h>

#include <signal.h>

#include <strings.h>

# 1 
#include "defs.h"
int  func0(int a1, struct termios *a2, int a3, int a4, unsigned __int8 a5, int a6)
{
int v6; // eax
tcflag_t v7; // eax
tcflag_t v8; // eax
tcflag_t v9; // eax
tcflag_t v10; // eax
tcflag_t v11; // eax
unsigned int v12; // edx

tcgetattr(a1, a2);
cfmakeraw(a2);
if ( a3 == 230400 )
{
cfsetispeed(a2, 0x1003u);
cfsetospeed(a2, 0x1003u);
}
else if ( a3 <= 230400 )
{
if ( a3 == 115200 )
{
cfsetispeed(a2, 0x1002u);
cfsetospeed(a2, 0x1002u);
}
else if ( a3 <= 115200 )
{
if ( a3 == 57600 )
{
cfsetispeed(a2, 0x1001u);
cfsetospeed(a2, 0x1001u);
}
else if ( a3 <= 57600 )
{
if ( a3 == 38400 )
{
cfsetispeed(a2, 0xFu);
cfsetospeed(a2, 0xFu);
}
else if ( a3 <= 38400 )
{
if ( a3 == 19200 )
{
cfsetispeed(a2, 0xEu);
cfsetospeed(a2, 0xEu);
}
else if ( a3 <= 19200 )
{
if ( a3 == 9600 )
{
cfsetispeed(a2, 0xDu);
cfsetospeed(a2, 0xDu);
}
else if ( a3 <= 9600 )
{
if ( a3 == 4800 )
{
cfsetispeed(a2, 0xCu);
cfsetospeed(a2, 0xCu);
}
else if ( a3 <= 4800 )
{
if ( a3 == 2400 )
{
cfsetispeed(a2, 0xBu);
cfsetospeed(a2, 0xBu);
}
else if ( a3 <= 2400 )
{
if ( a3 == 1800 )
{
cfsetispeed(a2, 0xAu);
cfsetospeed(a2, 0xAu);
}
else if ( a3 <= 1800 )
{
if ( a3 == 1200 )
{
cfsetispeed(a2, 9u);
cfsetospeed(a2, 9u);
}
else if ( a3 <= 1200 )
{
if ( a3 == 600 )
{
cfsetispeed(a2, 8u);
cfsetospeed(a2, 8u);
}
else if ( a3 <= 600 )
{
if ( a3 == 300 )
{
cfsetispeed(a2, 7u);
cfsetospeed(a2, 7u);
}
else if ( a3 <= 300 )
{
if ( a3 == 200 )
{
cfsetispeed(a2, 6u);
cfsetospeed(a2, 6u);
}
else if ( a3 <= 200 )
{
if ( a3 == 150 )
{
cfsetispeed(a2, 5u);
cfsetospeed(a2, 5u);
}
else if ( a3 <= 150 )
{
if ( a3 == 134 )
{
cfsetispeed(a2, 4u);
cfsetospeed(a2, 4u);
}
else if ( a3 <= 134 )
{
if ( a3 == 110 )
{
cfsetispeed(a2, 3u);
cfsetospeed(a2, 3u);
}
else if ( a3 <= 110 )
{
if ( a3 == 50 )
{
cfsetispeed(a2, 1u);
cfsetospeed(a2, 1u);
}
else if ( a3 == 75 )
{
cfsetispeed(a2, 2u);
cfsetospeed(a2, 2u);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
v6 = a5 | 0x20;
if ( v6 == 111 )
{
v10 = a2->c_cflag;
BYTE1(v10) |= 1u;
a2->c_cflag = v10;
v11 = a2->c_cflag;
BYTE1(v11) |= 2u;
a2->c_cflag = v11;
}
else if ( (a5 | 0x20u) <= 0x6F )
{
if ( v6 == 101 )
{
v8 = a2->c_cflag;
BYTE1(v8) |= 1u;
a2->c_cflag = v8;
v9 = a2->c_cflag;
BYTE1(v9) &= 0xFDu;
a2->c_cflag = v9;
}
else if ( v6 == 110 )
{
v7 = a2->c_cflag;
BYTE1(v7) &= 0xFEu;
a2->c_cflag = v7;
}
}
a2->c_cflag &= 0xFFFFFFCF;
if ( a4 == 8 )
{
a2->c_cflag |= 0x30u;
}
else if ( a4 <= 8 )
{
switch ( a4 )
{
case 7:
a2->c_cflag |= 0x20u;
break;
case 5:
a2->c_cflag = a2->c_cflag;
break;
case 6:
a2->c_cflag |= 0x10u;
break;
}
}
if ( a6 == 1 )
v12 = a2->c_cflag & 0xFFFFFFBF;
else
v12 = a2->c_cflag | 0x40;
a2->c_cflag = v12;
return tcsetattr(a1, 0, a2);
}