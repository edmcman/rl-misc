#include <linux/errno.h>

#include <linux/fs.h>

#include <linux/adfs_fs.h>

#include <linux/sched.h>

#include <linux/stat.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rax
unsigned int i; // [rsp+20h] [rbp-4h]

for ( i = 0; (char)*a2 > 31; ++i )
{
if ( !a3-- )
break;
v3 = a1++;
if ( *a2 == 47 )
*v3 = 46;
else
*v3 = *a2;
++a2;
}
*a1 = 0;
return i;
}