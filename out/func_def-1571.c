#include <stdio.h>

#include <string.h>

# 1 
void create_letter_distribution_diagram(char s[1000], int count[1000])
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z' )
{
count[s[c] - 'a'] ++;
}
if (s[c] >= 'A' && s[c] <= 'Z' )
{
count[s[c]-'A']++;
}
c++;
}
}