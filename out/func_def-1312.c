
# 1 
void calendar_date (long jdate, int *day, int *month, int *year)


{
 long a, b, c, d, e, z, alpha;
 z = jdate;

 if (z < 2299161L) a = z;
 else {


  alpha = (z*100 - 186721625L) / 3652425L;
  a = z + 1 + alpha - alpha/4;
  }
 b = a+1524;
 c = ((b*100 - 12210L) / 36525L);
 d = (36525*c)/100;
 e = ((b-d)*10000)/306001;
 *day = (int) b - d - (306001 * e)/10000;
 *month = (int) (e <= 13) ? e - 1 : e - 13;
 *year = (int) (*month > 2) ? (c - 4716) : c - 4715;
}