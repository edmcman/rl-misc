
# 1 
void re_escape(char s[],char t[])
{
 int i;
 int j;
 for(i=j=0;t[i]!='\0';i++)
  if(t[i]!='\\')
   s[j++]=t[i];
  else
  {
   switch (t[++i])
   {
    case 'b':
    s[j++]=' ';
    break;
   case 'n':
    s[j++]='\n';
    break;
   case 't':
    s[j++]='\t';
    break;
   default:
    s[j++]='\\';
    s[j++]=t[i];
    break;
   }
  }
 s[j]='\0';
}