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
int func0(long param_1,int param_2,long param_3){undefined4 local_24;undefined4 local_c;local_24 = param_2;for (local_c = 0; *(char *)(param_3 + local_c) != '\0'; local_c = local_c + 1) {*(undefined *)(local_24 + param_1) = *(undefined *)(local_c + param_3);local_24 = local_24 + 1;}*(undefined *)(param_1 + local_24) = 0;return local_24 + 1;}