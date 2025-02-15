#include <sqlite3.h>

#include <unistd.h>

#include <stdio.h>

#include <pthread.h>

#include <assert.h>

#include <sys/types.h> 

#include <sys/stat.h> 

#include <string.h>

#include <fcntl.h>

#include <errno.h>

# 1 
static void MD5Transform(unsigned int buf[4], const unsigned int in[16]){
  register unsigned int a, b, c, d;

  a = buf[0];
  b = buf[1];
  c = buf[2];
  d = buf[3];

  ( a += (d ^ (b & (c ^ d))) + in[ 0]+0xd76aa478, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[ 1]+0xe8c7b756, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[ 2]+0x242070db, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[ 3]+0xc1bdceee, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[ 4]+0xf57c0faf, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[ 5]+0x4787c62a, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[ 6]+0xa8304613, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[ 7]+0xfd469501, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[ 8]+0x698098d8, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[ 9]+0x8b44f7af, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[10]+0xffff5bb1, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[11]+0x895cd7be, b = b<<22 | b>>(32-22), b += c );
  ( a += (d ^ (b & (c ^ d))) + in[12]+0x6b901122, a = a<<7 | a>>(32-7), a += b );
  ( d += (c ^ (a & (b ^ c))) + in[13]+0xfd987193, d = d<<12 | d>>(32-12), d += a );
  ( c += (b ^ (d & (a ^ b))) + in[14]+0xa679438e, c = c<<17 | c>>(32-17), c += d );
  ( b += (a ^ (c & (d ^ a))) + in[15]+0x49b40821, b = b<<22 | b>>(32-22), b += c );

  ( a += (c ^ (d & (b ^ c))) + in[ 1]+0xf61e2562, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[ 6]+0xc040b340, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[11]+0x265e5a51, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[ 0]+0xe9b6c7aa, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[ 5]+0xd62f105d, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[10]+0x02441453, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[15]+0xd8a1e681, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[ 4]+0xe7d3fbc8, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[ 9]+0x21e1cde6, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[14]+0xc33707d6, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[ 3]+0xf4d50d87, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[ 8]+0x455a14ed, b = b<<20 | b>>(32-20), b += c );
  ( a += (c ^ (d & (b ^ c))) + in[13]+0xa9e3e905, a = a<<5 | a>>(32-5), a += b );
  ( d += (b ^ (c & (a ^ b))) + in[ 2]+0xfcefa3f8, d = d<<9 | d>>(32-9), d += a );
  ( c += (a ^ (b & (d ^ a))) + in[ 7]+0x676f02d9, c = c<<14 | c>>(32-14), c += d );
  ( b += (d ^ (a & (c ^ d))) + in[12]+0x8d2a4c8a, b = b<<20 | b>>(32-20), b += c );

  ( a += (b ^ c ^ d) + in[ 5]+0xfffa3942, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[ 8]+0x8771f681, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[11]+0x6d9d6122, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[14]+0xfde5380c, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[ 1]+0xa4beea44, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[ 4]+0x4bdecfa9, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[ 7]+0xf6bb4b60, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[10]+0xbebfbc70, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[13]+0x289b7ec6, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[ 0]+0xeaa127fa, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[ 3]+0xd4ef3085, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[ 6]+0x04881d05, b = b<<23 | b>>(32-23), b += c );
  ( a += (b ^ c ^ d) + in[ 9]+0xd9d4d039, a = a<<4 | a>>(32-4), a += b );
  ( d += (a ^ b ^ c) + in[12]+0xe6db99e5, d = d<<11 | d>>(32-11), d += a );
  ( c += (d ^ a ^ b) + in[15]+0x1fa27cf8, c = c<<16 | c>>(32-16), c += d );
  ( b += (c ^ d ^ a) + in[ 2]+0xc4ac5665, b = b<<23 | b>>(32-23), b += c );

  ( a += (c ^ (b | ~d)) + in[ 0]+0xf4292244, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[ 7]+0x432aff97, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[14]+0xab9423a7, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[ 5]+0xfc93a039, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[12]+0x655b59c3, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[ 3]+0x8f0ccc92, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[10]+0xffeff47d, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[ 1]+0x85845dd1, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[ 8]+0x6fa87e4f, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[15]+0xfe2ce6e0, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[ 6]+0xa3014314, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[13]+0x4e0811a1, b = b<<21 | b>>(32-21), b += c );
  ( a += (c ^ (b | ~d)) + in[ 4]+0xf7537e82, a = a<<6 | a>>(32-6), a += b );
  ( d += (b ^ (a | ~c)) + in[11]+0xbd3af235, d = d<<10 | d>>(32-10), d += a );
  ( c += (a ^ (d | ~b)) + in[ 2]+0x2ad7d2bb, c = c<<15 | c>>(32-15), c += d );
  ( b += (d ^ (c | ~a)) + in[ 9]+0xeb86d391, b = b<<21 | b>>(32-21), b += c );

  buf[0] += a;
  buf[1] += b;
  buf[2] += c;
  buf[3] += d;
}