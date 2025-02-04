
# 1 
void toUpper(char *ptr)
{
 int i;
 for(i=0;ptr[i];i++)
 ptr[i]&=~(1<<5);

}