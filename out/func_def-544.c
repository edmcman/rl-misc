#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/epoll.h>

# 1 
void deleteFdNum(int* arr, int fd){
    int i;
    for(i = 0; i < 10; i++){
        if(arr[i] == fd)
            arr[i] = 0;
    }
}