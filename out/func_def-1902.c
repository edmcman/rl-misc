






# 1 
char *strupr (char *text)
{
    char *origtext = text;
    while (*text != '\0')
    {
      if ((*text > 96) && (*text < 123)) *text -= 32;
      text++;
    }
    return (origtext);
}