#include <pthread.h>

#include <regex.h>

# 1 
int medusaReceiveInternal(int socket, unsigned char *buf, int length)
{
# 460 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/brianmwaters/medusa/refs/heads/master/src/medusa-net.c"
    return recv(socket, buf, length, 0);
}