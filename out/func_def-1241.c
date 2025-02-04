#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
static void set_move(char *move, char cor1, char cor2)
{
    *move++ = ((cor1) % 9 + 'a');
    *move++ = ((cor1) / 9 + '0');
    *move++ = ((cor2) % 9 + 'a');
    *move++ = ((cor2) / 9 + '0');
    *move = 0;
}