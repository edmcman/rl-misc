#include <unistd.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdarg.h>

#include <sys/sysinfo.h>

# 1 
void str2upper(char *str)
{
    if (!str) {
        return;
    }

    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 0x20;
        }
        ++str;
    }
}