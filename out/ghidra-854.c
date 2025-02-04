#include <sys/types.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <unistd.h>

#include <netdb.h>

#include <string.h>

# 1 
undefined8 func0(int param_1,void *param_2,int *param_3){ssize_t sVar1;undefined8 uVar2;sVar1 = recv(param_1,param_2,(long)*param_3,0);*param_3 = (int)sVar1;if (*param_3 < 1) {uVar2 = 0xffffffff;}else {uVar2 = 0;}return uVar2;}