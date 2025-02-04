
# 1 
int salta_espacio (char *buf, int size, int *index, int *old_index)
{
 *old_index=*index;

  while ((*index<size)&&((buf[*index]==' ')||(buf[*index]=='\n'))) {(*index)++;}

 if (*index==size)
  return -1;
 else
  return 0;
}