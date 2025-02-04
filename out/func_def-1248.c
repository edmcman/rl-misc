
# 1 
void copia(char *destino, const char *fonte)
{
  while(*fonte)
  *destino++ = *fonte++ ;

  *destino = 0 ;
}