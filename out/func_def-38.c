#include <sqlite3ext.h>

#include <string.h>

#include <assert.h>

#include <stdio.h>

# 1 
static int memCheckReservedLock(sqlite3_file *pFile, int *pResOut){
  *pResOut = 0;
  return SQLITE_OK;
}