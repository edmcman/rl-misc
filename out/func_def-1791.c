#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

#include <math.h>

# 1 
static void gui_modified_id_label(char result[256], const char *label, const char *addition)
{
 int i = 0;
 while (label[i] && label[i] != '|') {
  result[i] = label[i];
  ++i;
 }

 int k = 0;
 while (i < 256 && addition[k]) {
  result[i] = addition[k];
  ++i;
  ++k;
 }

 result[((i < 256 - 1) ? (i) : (256 - 1))] = '\0';
}