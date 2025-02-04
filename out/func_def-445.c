#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void calendar_date(int julian, int *yyyy, int *mm, int *dd)
{
    int j = julian;
    int y, m, d;

    j = j - 1721119 ;
    y = (4 * j - 1) / 146097;

    j = 4 * j - 1 - 146097 * y;
    d = j / 4;
    j = (4 * d + 3) / 1461;

    d = 4 * d + 3 - 1461 * j;
    d = (d + 4) / 4 ;
    m = (5 * d - 3) / 153;

    d = 5 * d - 3 - 153 * m;
    d = (d + 5) / 5 ;
    y = 100 * y + j ;

    if (m < 10)
        m = m + 3;
    else {
        m = m - 9;
        y = y + 1;
    }
    *yyyy = y;
    *mm = m;
    *dd = d;
}