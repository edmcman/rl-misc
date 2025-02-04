#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/un.h>

#include <sys/time.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <stdarg.h>

#include <stdio.h>

# 1 
int anetSockName(int fd, char *ip, size_t ip_len, int *port) {
    struct sockaddr_storage sa;
    socklen_t salen = sizeof(sa);

    if (getsockname(fd,(struct sockaddr*)&sa,&salen) == -1) {
        if (port) *port = 0;
        ip[0] = '?';
        ip[1] = '\0';
        return -1;
    }
    if (sa.ss_family == AF_INET) {
        struct sockaddr_in *s = (struct sockaddr_in *)&sa;
        if (ip) inet_ntop(AF_INET,(void*)&(s->sin_addr),ip,ip_len);
        if (port) *port = ntohs(s->sin_port);
    } else {
        struct sockaddr_in6 *s = (struct sockaddr_in6 *)&sa;
        if (ip) inet_ntop(AF_INET6,(void*)&(s->sin6_addr),ip,ip_len);
        if (port) *port = ntohs(s->sin6_port);
    }
    return 0;
}