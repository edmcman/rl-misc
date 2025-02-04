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
int putBuff(char buf[62*5+3], int j, char s[]) {
    int i = 0;
    for (; s[i];i++) {
        buf[j++] = s[i];
    }
    buf[j++] = '\0';
    return j;
}