#include <stdio.h>

# 1 
void Int2DecimalString(int Value, char *DecimalString)
{





 int i;
 if (Value > 0)
  DecimalString[0] = '+';
 else {

  DecimalString[0] = '-';

  Value = -Value;
 }
 for (i=10; i>0; i--) {
  DecimalString[i]=(Value % 10) + 48;
  Value = Value / 10;
 }
 DecimalString[11]=0;
}