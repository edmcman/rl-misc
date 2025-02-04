#include <netdb.h>

#include <netinet/in.h>

#include <sys/ioctl.h>

#include <signal.h>

#include <arpa/inet.h>

# 1 
char *stpcopy( char *dest, const char *src ) {
    while( ( *dest = *src ) ) {
        ++dest;
        ++src;
    }
    return ( dest );
}