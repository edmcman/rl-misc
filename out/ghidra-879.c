#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <time.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/socket.h>

#include <fcntl.h>

#include <dirent.h>

#include <regex.h>

# 1 
int func0(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src){EVP_PKEY_CTX *local_18;EVP_PKEY_CTX *local_10;local_10 = dst;for (local_18 = src; *local_18 != (EVP_PKEY_CTX)0x0; local_18 = local_18 + 1) {*local_10 = *local_18;local_10 = local_10 + 1;}*local_10 = (EVP_PKEY_CTX)0x0;return (int)local_10;}