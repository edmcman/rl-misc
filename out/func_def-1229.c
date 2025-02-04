#include <stdio.h> //For Standatd I/O Operations.

#include <stdlib.h> //For Exit() Function.

#include <string.h> //For strrev() and strlen() functions.

#include <stdbool.h> //For _Bool Boolean.

#include <ctype.h> //For isUpper(). isLower()

#include <time.h> //For Clock .

#include <math.h> //For pow().

# 1 
char *remove_duplicates(char *str)
{
    int bin_hash[256] = {0};


    int input_index = 0;


    int result_index = 0;

    char temp;



    while (*(str + input_index))
    {
        temp = *(str + input_index);
        if (bin_hash[temp] == 0)
        {
            bin_hash[temp] = 1;
            *(str + result_index) = *(str + input_index);
            result_index++;
        }
        input_index++;
    }



    *(str+result_index) = '\0';

    return str;
}