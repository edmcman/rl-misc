
# 1 
static char *qstrcpy(char *to, const char *from) {
 char *save = to;
 for (; (*to = *from) != '\0'; ++from, ++to);
 return(save);
}