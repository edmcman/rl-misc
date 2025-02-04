#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <string.h>

#include <signal.h>

#include <sys/ipc.h>            /* for all IPC function calls */

#include <sys/shm.h>            /* for shmget(), shmat(), shmctl() */

#include <sys/sem.h>            /* for semget(), semop(), semctl() */

#include <unistd.h> // for close

#include <sys/wait.h> //para o wait

#include <pthread.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, __int64 a3)
{
int v3; // eax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a3); ++i )
{
v3 = a2++;
*(_BYTE *)(a1 + v3) = *(_BYTE *)(i + a3);
}
*(_BYTE *)(a2 + a1) = 0;
return (unsigned int)(a2 + 1);
}