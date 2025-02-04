#include <signal.h>

#include <stdio.h>

#include <unistd.h>

# 1 
#include "defs.h"
int  func0(__int64 a1, char a2)
{
*(_QWORD *)a1 = 0LL;
if ( (a2 & 1) != 0 )
sigaddset((sigset_t *)(a1 + 8), 10);
if ( (a2 & 2) != 0 )
sigaddset((sigset_t *)(a1 + 8), 12);
return sigprocmask(0, (const sigset_t *)(a1 + 8), 0LL);
}