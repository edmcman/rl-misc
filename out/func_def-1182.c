
# 1 
void ibvio_deserialize_tag(int *fd, int *op, int tag)
{
  *op = 0;
  *op = (tag >> 16) & (0xffff);

  *fd = 0;
  *fd = (tag >> 0) & (0xffff);
  return;
}