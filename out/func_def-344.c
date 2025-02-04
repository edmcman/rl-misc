
# 1 
void u (int* size, double u0, double u1, const double du) {
 double quant = 0;
 if (u0 < u1) {
  if (u0 >= 0) {
   while (quant <= u0) {
    quant += du;
   }
  }
  else {
   while (quant >= u0 + du) {
    quant -= du;
   }
   if (u0 == quant) {
    quant += du;
   }
  }
  while (quant < u1) {
   *size = *size + 1;
   quant += du;
  }
 }
 else if (u0 > u1) {
  if (u0 > 0) {
   while (quant <= u0 - du) {
    quant += du;
   }
   if (u0 == quant) {
    quant -= du;
   }
  }
  else {
   while (quant >= u0) {
    quant -= du;
   }
  }
  while (quant > u1) {
   *size = *size + 1;
   quant -= du;
  }
 }
}