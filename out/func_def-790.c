


# 1 
void bump_maxfd(int fd, int *max)
{
  if (fd > *max)
    *max = fd;
}