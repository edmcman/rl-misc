#include <stdlib.h>

#include <sys/time.h>

# 1 
void rnd(long *prandom)
{
 *prandom = (25173 * *prandom + 13849) % 65536;
}