
# 1 
void squeeze (char s[], char s2[]) {
 int k, i, j;

 for (k = 0; s2[k] != '\0'; k++) {
  for (i = j = 0; s[i] != '\0'; i++)
   if (s[i] != s2[k])
    s[j++] = s[i];
  s[j] = '\0';
 }
}