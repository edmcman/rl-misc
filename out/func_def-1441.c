#include <string.h>

#include <wchar.h>

#include <wctype.h>

#include <assert.h>

# 1 
size_t wcslcpy(wchar_t *dst, const wchar_t *src, size_t siz) {
    size_t i;


    for (i = 0; i + 1 < siz && src[i] != L'\0'; ++i)
        dst[i] = src[i];


    dst[i] = L'\0';


    while (src[i] != L'\0')
        ++i;

    return i;
}