#include <stdlib.h>		/* snprintf, free */

#include <errno.h>		/* errno */

#include <string.h>		/* strerror, strcoll */

#include <zlib.h>		/* gzerror */

# 1 
char *
GRF_normalize_path(char *out, const char *in)
{
 char *orig;

 for (orig = out; *in != 0; out++, in++)
  *out = (*in == '\\') ? '/' : *in;
 out[0] = 0;

 return orig;
}