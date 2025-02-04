#include <stdio.h>

#include <stdlib.h>

# 1 
void str_to_table(int table[], const char str[], size_t max_str_len) {

    for(size_t i=0; i < max_str_len && str[i] != '\0'; ++i) {

        size_t new_index = str[i] - 0x61;



        table[new_index] = table[new_index] + 1;
    }
}