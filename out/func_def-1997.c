#include <openssl/x509.h>

#include <string.h>

#include <stdlib.h>

#include <openssl/ssl.h>

#include <openssl/conf.h>

#include <openssl/x509v3.h>

# 1 
static int equal_nocase(const unsigned char *pattern, size_t pattern_len,
   const unsigned char *subject, size_t subject_len)
 {
 if (pattern_len != subject_len)
  return 0;
 while (pattern_len)
  {
  unsigned char l = *pattern;
  unsigned char r = *subject;

  if (l == 0)
   return 0;
  if (l != r)
   {
   if ('A' <= l && l <= 'Z')
    l = (l - 'A') + 'a';
   if ('A' <= r && r <= 'Z')
    r = (r - 'A') + 'a';
   if (l != r)
    return 0;
   }
  ++pattern;
  ++subject;
  --pattern_len;
  }
 return 1;
 }