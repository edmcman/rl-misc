
# 1 
void squeeze(char s[],char t[])
{
 int i,j,k;
 for(i=k=0;s[i]!='\0';i++)
 {
  for(j=0;t[j]!='\0'&&t[j]!=s[i];j++)
   ;


  if(t[j]=='\0')
   s[k++]=s[i];
 }
 s[k]='\0';
}