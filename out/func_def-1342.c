
# 1 
static void Parse_NumberValue(char *string, int subtype, unsigned long int *intvalue,
                              double *floatvalue)
{
  unsigned long int dotfound = 0;

  *intvalue = 0;
  *floatvalue = 0;

  if (subtype & 0x0800)
  {
    while(*string)
    {
      if (*string == '.')
      {
        if (dotfound) return;
        dotfound = 10;
        string++;
      }
      if (dotfound)
      {
        *floatvalue = *floatvalue + (double) (*string - '0') /
                                  (double) dotfound;
        dotfound *= 10;
      }
      else
      {
        *floatvalue = *floatvalue * 10.0 + (double) (*string - '0');
      }
      string++;
    }
    *intvalue = (unsigned long) *floatvalue;
  }
  else if (subtype & 0x0008)
  {
    while(*string) *intvalue = *intvalue * 10 + (*string++ - '0');
    *floatvalue = *intvalue;
  }
  else if (subtype & 0x0100)
  {

    string += 2;
    while(*string)
    {
      *intvalue <<= 4;
      if (*string >= 'a' && *string <= 'f') *intvalue += *string - 'a' + 10;
      else if (*string >= 'A' && *string <= 'F') *intvalue += *string - 'A' + 10;
      else *intvalue += *string - '0';
      string++;
    }
    *floatvalue = *intvalue;
  }
  else if (subtype & 0x0200)
  {

    string += 1;
    while(*string) *intvalue = (*intvalue << 3) + (*string++ - '0');
    *floatvalue = *intvalue;
  }
  else if (subtype & 0x0400)
  {

    string += 2;
    while(*string) *intvalue = (*intvalue << 1) + (*string++ - '0');
    *floatvalue = *intvalue;
  }
}