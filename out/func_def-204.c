#include <stdio.h>

#include <stdlib.h>

#include <stdarg.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/param.h>

#include <regex.h>

# 1 
static int
find_mem_diff (const char *a, const char *b, size_t n, size_t *offset) {
    size_t i;
    if (a == b)
        return 0;
    if (!a || !b)
        return 2;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            *offset = i;
            return 1;
        }
    }
    return 0;
}