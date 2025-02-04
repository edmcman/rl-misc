
# 1 
void long_time (long time, int *hour, int *min, int *sec)
{
 long temp = time;

 *hour = (int) (temp / 3600);
 temp = temp - *hour * 3600;
 *min = (int) (temp / 60);
 *sec = (int) (temp - *min * 60);
}