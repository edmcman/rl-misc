#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void ConvertThreeSeven(int *number)
{
    int temp = *number;

    for(int i = 1; temp != 0; i *= 10, temp /= 10) {
        if(temp % 10 == 3 || temp % 10 == -7) {
            *number += 4 * i;
        } else if(temp % 10 == 7 || temp % 10 == -3) {
            *number -= 4 * i;
        }
    }
}