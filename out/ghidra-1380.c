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
void func0(int param_1,termios *param_2,int param_3,int param_4,byte param_5,int param_6){tcgetattr(param_1,param_2);cfmakeraw(param_2);if (param_3 == 0x38400) {cfsetispeed(param_2,0x1003);cfsetospeed(param_2,0x1003);}else if (param_3 < 0x38401) {if (param_3 == 0x1c200) {cfsetispeed(param_2,0x1002);cfsetospeed(param_2,0x1002);}else if (param_3 < 0x1c201) {if (param_3 == 0xe100) {cfsetispeed(param_2,0x1001);cfsetospeed(param_2,0x1001);}else if (param_3 < 0xe101) {if (param_3 == 0x9600) {cfsetispeed(param_2,0xf);cfsetospeed(param_2,0xf);}else if (param_3 < 0x9601) {if (param_3 == 0x4b00) {cfsetispeed(param_2,0xe);cfsetospeed(param_2,0xe);}else if (param_3 < 0x4b01) {if (param_3 == 0x2580) {cfsetispeed(param_2,0xd);cfsetospeed(param_2,0xd);}else if (param_3 < 0x2581) {if (param_3 == 0x12c0) {cfsetispeed(param_2,0xc);cfsetospeed(param_2,0xc);}else if (param_3 < 0x12c1) {if (param_3 == 0x960) {cfsetispeed(param_2,0xb);cfsetospeed(param_2,0xb);}else if (param_3 < 0x961) {if (param_3 == 0x708) {cfsetispeed(param_2,10);cfsetospeed(param_2,10);}else if (param_3 < 0x709) {if (param_3 == 0x4b0) {cfsetispeed(param_2,9);cfsetospeed(param_2,9);}else if (param_3 < 0x4b1) {if (param_3 == 600) {cfsetispeed(param_2,8);cfsetospeed(param_2,8);}else if (param_3 < 0x259) {if (param_3 == 300) {cfsetispeed(param_2,7);cfsetospeed(param_2,7);}else if (param_3 < 0x12d) {if (param_3 == 200) {cfsetispeed(param_2,6);cfsetospeed(param_2,6);}else if (param_3 < 0xc9) {if (param_3 == 0x96) {cfsetispeed(param_2,5);cfsetospeed(param_2,5);}else if (param_3 < 0x97) {if (param_3 == 0x86) {cfsetispeed(param_2,4);cfsetospeed(param_2,4);}else if (param_3 < 0x87) {if (param_3 == 0x6e) {cfsetispeed(param_2,3);cfsetospeed(param_2,3);}else if (param_3 < 0x6f) {if (param_3 == 0x32) {cfsetispeed(param_2,1);cfsetospeed(param_2,1);}else if (param_3 == 0x4b) {cfsetispeed(param_2,2);cfsetospeed(param_2,2);}}}}}}}}}}}}}}}}}param_5 = param_5 | 0x20;if (param_5 == 0x6f) {param_2->c_cflag = param_2->c_cflag | 0x100;param_2->c_cflag = param_2->c_cflag | 0x200;}else if (param_5 < 0x70) {if (param_5 == 0x65) {param_2->c_cflag = param_2->c_cflag | 0x100;param_2->c_cflag = param_2->c_cflag & 0xfffffdff;}else if (param_5 == 0x6e) {param_2->c_cflag = param_2->c_cflag & 0xfffffeff;}}param_2->c_cflag = param_2->c_cflag & 0xffffffcf;if (param_4 == 8) {param_2->c_cflag = param_2->c_cflag | 0x30;}else if (param_4 < 9) {if (param_4 == 7) {param_2->c_cflag = param_2->c_cflag | 0x20;}else if (param_4 < 8) {if (param_4 == 5) {param_2->c_cflag = param_2->c_cflag;}else if (param_4 == 6) {param_2->c_cflag = param_2->c_cflag | 0x10;}}}if (param_6 == 1) {param_2->c_cflag = param_2->c_cflag & 0xffffffbf;}else {param_2->c_cflag = param_2->c_cflag | 0x40;}tcsetattr(param_1,0,param_2);return;}