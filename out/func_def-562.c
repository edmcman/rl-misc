#include <assert.h>

#include <stddef.h>

#include <string.h>

#include <nmmintrin.h>

#include <x86intrin.h>

# 1 
static const char *findchar_fast(const char *buf, const char *buf_end, const char *ranges, size_t ranges_size, int *found)
{
    *found = 0;
# 129 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/cubicdaiya/h2o/refs/heads/master/deps/picohttpparser/picohttpparser.c"
    (void)buf_end;
    (void)ranges;
    (void)ranges_size;

    return buf;
}