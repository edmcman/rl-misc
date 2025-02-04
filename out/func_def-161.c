#include <stdio.h>

#include <string.h>

#include <wchar.h>

#include <stdlib.h>

# 1 
int UTF2UnicodeOne(const char* utf8, wchar_t *wch) {
    unsigned char firstCh = utf8[0];
    int k;
    if(firstCh >= 0xC0) {

        int afters,code;
        if((firstCh & 0xE0) == 0xC0) {
            afters = 2;
            code = firstCh & 0x1F;
        } else if((firstCh & 0xF0) == 0xE0) {
            afters = 3;
            code = firstCh & 0xF;
        } else if((firstCh & 0xF8) == 0xF0) {
            afters = 4;
            code = firstCh & 0x7;
        } else if((firstCh & 0xFC) == 0xF8) {
            afters = 5;
            code = firstCh & 0x3;
        } else if((firstCh & 0xFE) == 0xFC) {
            afters = 6;
            code = firstCh & 0x1;
        } else {
            *wch= firstCh;
            return 1;
        }



        for (k = 1; k < afters; k++) {
            if ((utf8[k] & 0xC0) != 0x80) {

                *wch = firstCh;
                return 1;
            }

            code <<= 6;
            code |= (unsigned char)utf8[k] & 0x3F;
        }
        *wch = code;
        return afters;
    } else {
        *wch = firstCh;
    }

    return 1;
}