#include <stdio.h>

#include <time.h>

#include <errno.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/times.h>

#include <sys/utsname.h>

#include <string.h>

# 1 
void c_gethostname_(char * name, int maxlen){
    gethostname(name, (size_t) maxlen);
}