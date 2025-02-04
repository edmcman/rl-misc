





# 1 
int MPI_Cart_get(int comm, int maxdims, int *dims, int *periods,
                 int *coords)
{
  dims[0] = dims[1] = dims[2] = 1;
  periods[0] = periods[1] = periods[2] = 1;
  coords[0] = coords[1] = coords[2] = 0;
  return 0;
}