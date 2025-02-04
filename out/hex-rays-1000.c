#include <netdb.h>

#include <netinet/in.h>

#include <sys/ioctl.h>

#include <signal.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
while ( 1 )
{
*a1 = *a2;
if ( !*a1 )
break;
++a1;
++a2;
}
return a1;
}