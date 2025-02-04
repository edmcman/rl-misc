#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/epoll.h>

# 1 
void func0(long param_1,int param_2){undefined4 local_c;for (local_c = 0; local_c < 10; local_c = local_c + 1) {if (param_2 == *(int *)(param_1 + (long)local_c * 4)) {*(undefined4 *)(param_1 + (long)local_c * 4) = 0;}}return;}