#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stdarg.h>

#include <ctype.h>

#include <netdb.h>

#include <unistd.h>

#include <sys/time.h>

#include <time.h>

#include <netinet/in.h>

#include <sys/socket.h>

#include <sys/wait.h>

#include <arpa/inet.h>

# 1 
void cardname(int c, char *obuf) {

  static char nbuf[] = "23456789TJQKA";
  static char sbuf[] = "cdhs";

  obuf[0] = nbuf[c%13];
  obuf[1] = sbuf[c/13];
  obuf[2] = '\0';

}