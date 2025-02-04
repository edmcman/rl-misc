#include <termios.h>

#include <unistd.h>

#include <stdlib.h>

#include <stdio.h>

#include <errno.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/ioctl.h>

#include <unistd.h>

# 1 
static size_t defaultNextCharLen(const char *buf, size_t buf_len, size_t pos, size_t *col_len) {
    (void)(buf); (void)(buf_len); (void)(pos);
    if (col_len != NULL) *col_len = 1;
    return 1;
}