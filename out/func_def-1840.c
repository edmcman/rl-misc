
# 1 
void ibvio_serialize_tag(int fd, int op, int *tag)
{
  *tag = 0;
  *tag = (
   ( ((op) & (0xffff)) << 16) |
   ( ((fd) & (0xffff)) << 0)
         );
  return;
}