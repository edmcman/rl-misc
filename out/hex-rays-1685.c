#include <sys/mount.h>

#include <sys/stat.h>

#include <sys/statvfs.h>

#include <sys/wait.h>

#include <linux/limits.h>

#include <fnmatch.h>

#include <glob.h>

#include <dirent.h>

#include <errno.h>

#include <fcntl.h>

#include <sys/utsname.h>

# 1 
#include "defs.h"
__int64  func0(const char *a1, unsigned __int64 *a2)
{
struct statvfs v3; // [rsp+10h] [rbp-80h] BYREF
unsigned __int64 v4; // [rsp+88h] [rbp-8h]

v4 = __readfsqword(0x28u);
if ( statvfs(a1, &v3) < 0 )
return (unsigned int)-*_errno_location();
*a2 = v3.f_flag;
return 0LL;
}