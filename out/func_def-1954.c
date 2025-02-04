#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
void u8_inc(char *s, int *i)
{
    if (s[(*i)++] & 0x80) {
        if (!(((s[*i])&0xC0)!=0x80)) {
            ++(*i);
            if (!(((s[*i])&0xC0)!=0x80)) {
                ++(*i);
                if (!(((s[*i])&0xC0)!=0x80)) {
                    ++(*i);
                }
            }
        }
    }
}