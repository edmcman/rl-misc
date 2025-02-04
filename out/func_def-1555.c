#include <stdint.h>

#include <stdio.h>

# 1 
static int ones(int *v) {
    int ret = 0;
    switch (*v) {
        case 9:
            ret = 4;
            break;
        case 8:
            ret = 5;
            break;
        case 7:
            ret = 5;
            break;
        case 6:
            ret = 3;
            break;
        case 5:
            ret = 4;
            break;
        case 4:
            ret = 4;
            break;
        case 3:
            ret = 5;
            break;
        case 2:
            ret = 3;
            break;
        case 1:
            ret = 3;
            break;
        case 0:
            return 0;
    }
    *v = 0;
    return ret;
}