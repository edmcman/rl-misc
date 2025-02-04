
# 1 
void sgdate (int *day, int *mon, int *year, int serial)
{
 int j;
 if (serial >= 59) serial = serial + 1;
 serial = serial + 36466;
 serial = serial * 4;
 serial = serial - 1;
 *year = serial / 1461;
 j = serial % 1461;
 if (j < 0) {j = j + 1461; *year = *year - 1;}
 j = j / 4;
 j = j * 5;
 j = j + 2;
 *mon = j / 153;
 *day = j % 153;
 *day = *day / 5 + 1;
      if (*mon < 10) {*mon = *mon + 3;}
                else {*mon = *mon - 9; *year = *year + 1;}
 *year = *year - 100;
 return;
}