#include <pthread.h>

#include <regex.h>

# 1 
#include "defs.h"
ssize_t  func0(int a1, void *a2, unsigned int a3)
{
return recv(a1, a2, a3, 0);
}