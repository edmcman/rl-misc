








# 1 
static void
tableStartATH(double atp_value, double atpH[5][5])
{

   int i, j;
   for (i = 0; i < 5; ++i)
     for (j = 0; j < 5; ++j)
       atpH[i][j] = 0.0;

   atpH[0][3] = atpH[3][0] = atp_value;
}