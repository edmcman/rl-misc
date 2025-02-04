#include <stdlib.h>

#include <stdint.h>

#include <stdio.h>

#include <stdbool.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
int read_csi_buf(unsigned char* buf_addr,int fd, int BUFSIZE){
    int cnt;




    cnt = read(fd,buf_addr,BUFSIZE);
    if(cnt)
        return cnt;
    else
        return 0;
}