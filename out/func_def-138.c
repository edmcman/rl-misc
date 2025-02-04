#include <stdio.h>

#include <limits.h>

#include <stdlib.h>

#include <errno.h>

#include <string.h>

#include <unistd.h>

#include <sys/wait.h>

#include <sys/stat.h>

#include <sys/sem.h>

# 1 
void set_sembuf(struct sembuf *s, int num, int op, int flg)
{
 s->sem_num = (short)num;
 s->sem_op= (short)op;
 s->sem_flg= (short)flg;
 return;
}