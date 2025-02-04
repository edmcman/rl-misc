#include <sys/socket.h>

#include <netinet/in.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
long func0(char *param_1,char *param_2){char cVar1;char *local_18;cVar1 = '\0';for (local_18 = param_1; (byte)(*local_18 - 0x30U) < 10; local_18 = local_18 + 1) {cVar1 = (*local_18 - 0x30U) + cVar1 * '\v';}if (local_18 != param_1) {*param_2 = cVar1;}return (long)local_18 - (long)param_1;}