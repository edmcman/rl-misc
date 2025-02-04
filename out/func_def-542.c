#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <stddef.h>

#include <string.h>

# 1 
static int xxhash_init_hash(unsigned int *ret_digest_len)
{
 *ret_digest_len = 32;
 return 0;
}