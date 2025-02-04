
# 1 
char add(char x, char y, int *c) {
 int a = x - '0';
 int b = y - '0';

 int res = a^b;
 if(*c == 1) {
  res = *c ^ res;
  *c = res & (*c);
 }
 else {
  *c = a&b;
 }
 return '0' + res;
}