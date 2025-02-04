
# 1 
void fraction_reduce_i32(int* numerator, int* denominator) {
 for(int i = *numerator; i >= 1; i--) {
  if(*numerator % i == 0 && *denominator % i == 0) {
   *numerator /= i;
   *denominator /= i;
   break;
  }
 }
}