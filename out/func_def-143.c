




# 1 
int find_nearest(const float *codebook, int nb_entries, float *x, int ndim, float *min_dist)
{
  int i, j;
  int nearest = 0;

  *min_dist = 1E15;

  for (i=0;i<nb_entries;i++)
  {
    float dist=0;
    for (j=0;j<ndim;j++)
      dist += (x[j]-codebook[i*ndim+j])*(x[j]-codebook[i*ndim+j]);
    if (dist<*min_dist)
    {
      *min_dist = dist;
      nearest = i;
    }
  }
  return nearest;
}