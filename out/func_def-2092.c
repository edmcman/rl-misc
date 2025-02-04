





# 1 
int MPI_Get_version(int *major, int *minor)
{
  if (!major || !minor) return -1;

  *major = 1;
  *minor = 2;
  return 0;
}