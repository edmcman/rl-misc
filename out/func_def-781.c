#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <time.h>

#include <string.h>

# 1 
int comp(int *arg1, unsigned int *arg2, int length1, int length2) {


    int i, j;
    for (i = 0; i < length1; i++) {
        int icur = arg1[i];
        for (j = 0; j < length2; j++) {
            int jcur = arg2[j];
            if (jcur == icur) {
                arg2[j] = 0;
            }
        }
    }

    for (i = 0; i < length2; i++) {
        if (arg2[i]) {
            return 0;
        }
    }

    return 1;
}