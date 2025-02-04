#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <stdarg.h>

#include <malloc.h>

#include <alloca.h>

# 1 
void u8_dec(char *s, int *i)
{
    (void)((((s[--(*i)])&0xC0)!=0x80) || (((s[--(*i)])&0xC0)!=0x80) ||
           (((s[--(*i)])&0xC0)!=0x80) || --(*i));
}