#include <netdb.h>

#include <netinet/in.h>

#include <sys/ioctl.h>

#include <signal.h>

#include <arpa/inet.h>

# 1 
char * func0(char *param_1,char *param_2){char *local_18;char *local_10;local_18 = param_2;for (local_10 = param_1; *local_10 = *local_18, *local_10 != '\0'; local_10 = local_10 + 1) {local_18 = local_18 + 1;}return local_10;}