#include <string.h>

# 1 
static void kill_char(char *str, char *del) {
 for (str=str; *str != '\0'; str++) {
  int i;
  for (i=0; del[i] != '\0'; i++) {
   if (del[i] == *str) {
    *str = '\0';
    return;
   }
  }
 }
}