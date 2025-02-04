
















# 1 
int read_hci_event(int fd, unsigned char* buf, int size)
{
 int remain, r;
 int count = 0;

 if (size <= 0)
  return -1;



 while (1) {
  r = read(fd, buf, 1);
  if (r <= 0)
   return -1;
  if (buf[0] == 0x04)
   break;
 }
 count++;


 while (count < 3) {
  r = read(fd, buf + count, 3 - count);
  if (r <= 0)
   return -1;
  count += r;
 }


 if (buf[2] < (size - 3))
  remain = buf[2];
 else
  remain = size - 3;

 while ((count - 3) < remain) {
  r = read(fd, buf + count, remain - (count - 3));
  if (r <= 0)
   return -1;
  count += r;
 }

 return count;
}