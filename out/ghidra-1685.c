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
int func0(char *param_1,ulong *param_2){int iVar1;int *piVar2;long in_FS_OFFSET;statvfs local_88;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);iVar1 = statvfs(param_1,&local_88);if (iVar1 < 0) {piVar2 = __errno_location();iVar1 = -*piVar2;}else {*param_2 = local_88.f_flag;iVar1 = 0;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return iVar1;}