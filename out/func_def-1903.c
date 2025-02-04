#include <stdio.h>

#include <string.h>

# 1 
static void getLine(const char *buf, int inStart, int *lineStart, int *lineEnd)
{
 int start, end;
 for (start=inStart; buf[start]==' ' || buf[start]=='\t' || buf[start]=='\r' || buf[start]=='\n'; start++);
 for (end=start; buf[end]!='\r' && buf[end]!='\n' && buf[end]!='\0'; end++);
 *lineStart = start;
 *lineEnd = end;
}