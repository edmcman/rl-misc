#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <getopt.h>

# 1 
void
get_binary_string(char *buffer, char symbol)
{
 int i = 0;
 for(i = 0; i <= 8; i++)
  buffer[8-i] = (1 & (symbol >> i)) ? '1' : '0';
 return;
}