#include <stdio.h>

# 1 
void reverse(char line[]) {
    int i, j;
    char tmp;


    for (i = 0; line[i] != '\0'; i++);

    i--;

    if (line[i] == '\n') {
        i--;
    }

    j = 0;
    while (j < i) {

        tmp = line[j];
        line[j] = line[i];
        line[i] = tmp;
        i--;
        j++;
    }
}