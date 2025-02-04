
# 1 
void reverse_string(char* String)
{
 int number = 0;
 int temp = 0;
 int counter= 0;
 for (number = 0;*(String+number) != '\0';number++)
 {
 }
    number--;
 if(number%2 == 0)
 {
  for(counter = 0;counter<number/2;counter++)
  {
   temp = *(String+number-counter);
   *(String+number-counter) = *(String+counter);
   *(String+counter) = temp;
  }
 }
 else
 {
  for(counter = 0;counter<number/2+1;counter++)
  {
   temp = *(String+number-counter);
   *(String+number-counter) = *(String+counter);
   *(String+counter) = temp;
  }
 }
}