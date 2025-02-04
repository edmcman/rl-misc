
# 1 
void check(int ch[],int*cnta,int*cntn,int*cnts,int*n)
{
 int index;
 for(index=0;index<(*n);index++)
 {
         if((ch[index]>='A'&&ch[index]<='Z')||(ch[index]>='a'&&ch[index]<='z'))
  (*cnta)++;

 else if(ch[index]>=0 && ch[index]<=9)
  (*cntn)++;
 else (*cnts)++;

 }


}