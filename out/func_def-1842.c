#include <stdio.h>

#include <string.h>

# 1 
int test(char *s, char *t)
{
     int i = 0;
     int j = 0;
     int flag = 0;

     for (; s[j] != '\0'; j++)
     {
         flag = 0;
         for (i = 0; t[i] != '\0'; i++)
         {
             if (s[j] == t[i])
             {
                 flag = 1;
                 t[i] = '+';
                 break;
             }
         }

         if (t[i] == '\0' && flag == 0)
         {
              return 0;
         }
     }


     return 1;
}