#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdio.h>

#include <stdint.h>

#include <unistd.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

#include <ctype.h>

# 1 
static void
extension_version(unsigned char *x)
{
    (void)("Extension version: %d\n", x[1]);
}