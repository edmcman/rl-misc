
# 1 
const char *ares_version(int *version)
{
  if(version)
    *version = ((1<<16)| (7<<8)| (1));

  return "1.7.1";
}