#include <stdio.h>

# 1 
int reverse(char line[]) {
    int i = 0, j = 0;
    char tmp;

    while (line[i] != '\0') {
        ++i;
    }
    --i;
    if (line[i] == '\n') {
        --i;
    }
    while (j < i) {
        tmp = line[j];
        line[j] = line[i];
        line[i] = tmp;
        --i;
        ++j;
    }
}