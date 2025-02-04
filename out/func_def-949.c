





# 1 
int MPI_Cart_create(int comm_old, int ndims, int *dims, int *periods,
                    int reorder, int *comm_cart)
{
  *comm_cart = comm_old;
  return 0;
}