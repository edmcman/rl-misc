#include <netdb.h>

#include <string.h>

# 1 
int getservbyname_r(
  const char *name,
  const char *proto,
  struct servent *result_buf,
  char *buf,
  size_t buflen,
  struct servent **result
)
{


  *result = getservbyname(name, proto);
  if ( *result )
    return 0;

  return -1;
}