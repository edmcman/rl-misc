#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <unistd.h>

#include <termios.h>

# 1 
void fill_out_sum (int O_dgen, int N_dgen, int s[256])
{



    int i = 0, j = 0;
    for (i=O_dgen; i<N_dgen; i=i+O_dgen) {
        do {
            s[i+j] = s[j];
            j++;
        } while (j<O_dgen);
        j = 0;
    }
}