
# 1 
void Reverse(char s[])
{
 int i,j;
 int temp;
 i=j=0;
 while(s[i]!='\0')
  i++;
 --i;
 if(s[i]='\n')
  i--;
 while(j<i)
 {
  temp=s[j];
  s[j]=s[i];
  s[i]=temp;
  i--;
  j++;
 }
}