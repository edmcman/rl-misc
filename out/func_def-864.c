#include <netdb.h>

#include <string.h>

# 1 
int getservbyport_r(
  int port,
  const char *proto,
  struct servent *result_buf,
  char *buf,
  size_t buflen,
  struct servent **result
)
{


  *result = getservbyport(port, proto);
  if ( *result )
    return 0;

  return -1;
}