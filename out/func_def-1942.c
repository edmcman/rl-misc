
# 1 
void decrypt(char* data,char const *key)
{
 int temp = 0;
 int alph = 0;
 char alphabet[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
 for (temp = 0;data[temp] != '\0';temp++)
 {
  for(alph = 0;alph<27;alph++)
  {
   if(data[temp] == key[temp])
   {
    data[temp] = alphabet[alph];
   }
  }
 }
}