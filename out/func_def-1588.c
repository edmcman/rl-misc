#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <termios.h>

#include <unistd.h>

# 1 
struct termios initTerms(int fd,struct termios config,int settings){
    if(settings){
# 98 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/atowneND/pragmawebsite/refs/heads/master/refs/serialfun.c"
 config.c_iflag &= ~(IGNBRK | BRKINT | ICRNL | INLCR | PARMRK | INPCK | ISTRIP | IXON);
# 108 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/atowneND/pragmawebsite/refs/heads/master/refs/serialfun.c"
 config.c_oflag = 0;







 config.c_lflag &= ~(ECHO | ECHONL | ICANON | IEXTEN | ISIG);






 config.c_cflag &= ~(CSIZE | PARENB);
 config.c_cflag |= CS8;



 config.c_cc[VMIN] = 1;
 config.c_cc[VTIME] = 0;
    }
    else {
        config.c_lflag &= ~ICANON;
    }

 return config;
}