#include <sys/types.h>

#include <stdio.h>

#include <string.h>

#include <syslog.h>

#include <time.h>

# 1 
static unsigned long hashval(const unsigned char hash[16], const size_t nbits) {
    unsigned long u;
    size_t i;
    for (i = 0, u = 0; i < 4; ++i)
        u |= ((unsigned long)hash[i]) << (i * 8);
    return u & ((1 << nbits) - 1);
}