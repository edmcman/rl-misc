#include <stdio.h>

#include <stdlib.h>

# 1 
char * ftoa(double f, char * buf, int precision)
{
    char * ptr = buf;
    char * p = ptr;
    char * p1;
    char c;
    long intPart;
    char* temp_str;


    if (precision > (13))
        precision = (13);


    if (f < 0)
    {
        f = -f;
        *ptr++ = '-';
    }

    if (precision < 0)
    {
        if (f < (double)1.0) precision = 6;
        else if (f < (double)10.0) precision = 5;
        else if (f < (double)100.0) precision = 4;
        else if (f < (double)1000.0) precision = 3;
        else if (f < (double)10000.0) precision = 2;
        else if (f < (double)100000.0) precision = 1;
        else precision = 0;
    }






    intPart = f;
    f -= intPart;

    if (!intPart)
        *ptr++ = '0';
    else
    {

        p = ptr;


        while (intPart)
        {
            *p++ = '0' + intPart % 10;
            intPart /= 10;
        }


        p1 = p;


        while (p > ptr)
        {
            c = *--p;
            *p = *ptr;
            *ptr++ = c;
        }


        ptr = p1;
    }


    if (precision)
    {

        *ptr++ = '.';


        while (precision--)
        {
            f *= (double)10.0;
            c = f;
            *ptr++ = '0' + c;
            f -= c;
        }
    }


    *ptr = 0;

    temp_str = --ptr;
    while(*temp_str != '.')
    {
        if(*temp_str == '0')
        {
            *temp_str = '\0';
        }
        else
        {
            break;
        }
        temp_str--;
    }

    if((*(temp_str+1) == '\0') && (*temp_str == '.'))
    {
        *(temp_str+1) = '0';
    }

    return buf;
}