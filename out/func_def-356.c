#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <stdlib.h>

#include <inttypes.h>

#include <unistd.h>

# 1 
void decode_indexed_addr(char location[],char index[])
{
 int i,flag,j;
 for(i=0,j=0,flag=0;location[i]!='\0';i++,j++)
 {
  if(location[i] == ']')
  {
   flag = 1;
   j=0;
   location[i]='\0';
   if(location[i+1] == 'R' || location[i+1] == 'S' || location[i+1] == 'T')
   {
    i++;
    location[i]='\0';
   }
  }
  if(flag == 1)
   index[j] = location[i];
 }
 index[j]='\0';
}