#include <unistd.h>

#include <string.h>

# 1 
void overflow(int flood[], int pos)
{
    flood[pos + 1] += flood[pos] / 10;
    flood[pos] %= 10;
}