
# 1 
void SdnToFrench(
     long int sdn,
     int *pYear,
     int *pMonth,
     int *pDay)
{
 long int temp;
 int dayOfYear;

 if (sdn < 2375840 || sdn > 2380952) {
  *pYear = 0;
  *pMonth = 0;
  *pDay = 0;
  return;
 }
 temp = (sdn - 2375474) * 4 - 1;
 *pYear = temp / 1461;
 dayOfYear = (temp % 1461) / 4;
 *pMonth = dayOfYear / 30 + 1;
 *pDay = dayOfYear % 30 + 1;
}