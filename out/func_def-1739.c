
# 1 
void
write_time (int time, char *buffer)
{
  int min, sec;

  min = time / 60;
  sec = time % 60;
  buffer[0] = '0' + min / 10;
  buffer[1] = '0' + min % 10;
  buffer[2] = ':';
  buffer[3] = '0' + sec / 10;
  buffer[4] = '0' + sec % 10;
  buffer[5] = 0;
}