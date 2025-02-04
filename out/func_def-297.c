
# 1 
char *encrypt(char *senha)
{
 while(*senha)
 {
  *senha = *senha ^ 31;
  senha++;
 }

 return senha;
}