
# 1 
int read_line(int fd, char* buf, int maxlen)
{
 int i, n;
 char ch;
 for(i = 0; i < maxlen;)
 {
  n = read(fd, &ch, 1);
  if(n == 1)
  {
   buf[i++] = ch;
   if(ch == '\n')
    break;
  }
  else if(n < 0)
   return (-1);
  else
   break;
 }
 buf[i] = '\0';
 return (i);
}