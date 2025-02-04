#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <fcntl.h>

#include <termios.h>

#include <signal.h>

#include <strings.h>

# 1 
int setserial(int s,struct termios*cfg,int speed,int data,unsigned char parity,int stopb){
        tcgetattr(s,cfg);
 cfmakeraw(cfg);
 switch(speed){
  case 50 : { cfsetispeed(cfg,B50) ; cfsetospeed(cfg,B50) ; break; }
  case 75 : { cfsetispeed(cfg,B75) ; cfsetospeed(cfg,B75) ; break; }
  case 110 : { cfsetispeed(cfg,B110) ; cfsetospeed(cfg,B110) ; break; }
  case 134 : { cfsetispeed(cfg,B134) ; cfsetospeed(cfg,B134) ; break; }
  case 150 : { cfsetispeed(cfg,B150) ; cfsetospeed(cfg,B150) ; break; }
  case 200 : { cfsetispeed(cfg,B200) ; cfsetospeed(cfg,B200) ; break; }
  case 300 : { cfsetispeed(cfg,B300) ; cfsetospeed(cfg,B300) ; break; }
  case 600 : { cfsetispeed(cfg,B600) ; cfsetospeed(cfg,B600) ; break; }
  case 1200 : { cfsetispeed(cfg,B1200) ; cfsetospeed(cfg,B1200) ; break; }
  case 1800 : { cfsetispeed(cfg,B1800) ; cfsetospeed(cfg,B1800) ; break; }
  case 2400 : { cfsetispeed(cfg,B2400) ; cfsetospeed(cfg,B2400) ; break; }
  case 4800 : { cfsetispeed(cfg,B4800) ; cfsetospeed(cfg,B4800) ; break; }
  case 9600 : { cfsetispeed(cfg,B9600) ; cfsetospeed(cfg,B9600) ; break; }
  case 19200 : { cfsetispeed(cfg,B19200) ; cfsetospeed(cfg,B19200) ; break; }
  case 38400 : { cfsetispeed(cfg,B38400) ; cfsetospeed(cfg,B38400) ; break; }
  case 57600 : { cfsetispeed(cfg,B57600) ; cfsetospeed(cfg,B57600) ; break; }
  case 115200 : { cfsetispeed(cfg,B115200); cfsetospeed(cfg,B115200); break; }
  case 230400 : { cfsetispeed(cfg,B230400); cfsetospeed(cfg,B230400); break; }
 }
 switch(parity|32){
  case 'n' : { cfg->c_cflag &= ~PARENB; break; }
  case 'e' : { cfg->c_cflag |= PARENB; cfg->c_cflag &= ~PARODD; break; }
  case 'o' : { cfg->c_cflag |= PARENB; cfg->c_cflag |= PARODD ; break; }
 }
 cfg->c_cflag &= ~CSIZE;
 switch(data){
  case 5 : { cfg->c_cflag |= CS5; break; }
  case 6 : { cfg->c_cflag |= CS6; break; }
  case 7 : { cfg->c_cflag |= CS7; break; }
  case 8 : { cfg->c_cflag |= CS8; break; }
 }
 if(stopb==1)cfg->c_cflag&=~CSTOPB;
 else cfg->c_cflag|=CSTOPB;
 return tcsetattr(s,TCSANOW,cfg);
}