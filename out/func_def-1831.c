
# 1 
int sum10(int values[10]) {
  int i;
  int sum = 0;
  for(i=0;i<10;++i) { sum += values[i]; }
  values[0] = 342;
  return sum;
}