#include <sqlite3.h>

#include <assert.h>

#include <dlfcn.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <time.h>

#include <unistd.h>

# 1 
static int nolockCheckReservedLock(sqlite3_file * NotUsed, int * pResOut)
{
  (void)(NotUsed);
  *pResOut = 0;
  return SQLITE_OK;
}