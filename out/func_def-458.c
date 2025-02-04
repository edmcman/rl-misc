#include <stdio.h>

# 1 
void strcpy1(char *s, char *t){
    while((*s = *t) != '\0'){
        s++;
        t++;
    }
}