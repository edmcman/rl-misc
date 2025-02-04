#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
int put_char_bare_utf8(char *_dst, int _ch)
{
    unsigned int ch = (unsigned int)_ch;
    unsigned char *dst = (unsigned char *)_dst;
    int len = 0;

    if (ch <= 0x7F) {
        *dst++ = ch;
        len = 1;
    }
    else if (ch <= 0x07FF) {
        *dst = 0b11000000;
        *dst++ |= (ch >> 6) & 0b00011111;
        *dst = 0b10000000;
        *dst++ |= (ch & 0b00111111);
        len = 2;
    }
    else if (ch <= 0xFFFF) {
        *dst = 0b11100000;
        *dst++ |= (ch >> 12) & 0b00001111;
        *dst = 0b10000000;
        *dst++ |= (ch >> 6) & 0b00111111;
        *dst = 0b10000000;
        *dst++ |= ch & 0b00111111;
        len = 3;
    }
    else if (ch <= 0x01FFFFF) {
        *dst = 0b11100000;
        *dst++ |= (ch >> 18) & 0b00000111;
        *dst = 0b10000000;
        *dst++ |= (ch >> 12) & 0b00111111;
        *dst = 0b10000000;
        *dst++ |= (ch >> 6) & 0b00111111;
        *dst = 0b10000000;
        *dst++ |= ch & 0b00111111;
        len = 4;
    }

    return len;
}