#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
void ExcelSerialDateToDMY(int serial_date, int* day, int* month, int* year)
{
    int l, n, i, j;


    if (serial_date == 60) {
        *day = 29;
        *month = 2;
        *year = 1900;
    }
    else {
        if (serial_date < 60) {


        serial_date++;
        }


        l = serial_date + 68569 + 2415019;
        n = (int)(( 4 * l ) / 146097);
        l = l - (int)(( 146097 * n + 3 ) / 4);
        i = (int)(( 4000 * ( l + 1 ) ) / 1461001);
        l = l - (int)(( 1461 * i ) / 4) + 31;
        j = (int)(( 80 * l ) / 2447);
        *day = l - (int)(( 2447 * j ) / 80);
        l = (int)(j / 11);
        *month = j + 2 - ( 12 * l );
        *year = 100 * ( n - 49 ) + i + l;
    }
}