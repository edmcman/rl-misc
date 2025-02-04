
# 1 
void add_a_vector(int dim, double factor, double *ptr_1,double *ptr_2)
{
  do {
    *(ptr_2++) += factor * (*(ptr_1++));
  } while (--dim);

}