#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <stdio.h>

#include <ctype.h>

#include <sys/select.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <sys/stat.h>

#include <errno.h>

#include <signal.h>

#include <openssl/ssl.h>

#include <openssl/bio.h>

#include <openssl/err.h>

#include <openssl/rand.h>

# 1 
int
verify_cookie(SSL *ssl, unsigned char *cookie, unsigned int cookie_len)
{

  return 1;
}