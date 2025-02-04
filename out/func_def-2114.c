
# 1 
void toUpper(char* str) {
 while(*str) {
  if (*str >= 'a' && *str <= 'z') {
   *str += 'A' - 'a';
  }
  str++;
 }
}