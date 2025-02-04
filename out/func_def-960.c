
# 1 
static int edflib_sprint_number_nonlocalized(char *str, double nr)
{
  int flag=0, z, i, j=0, q, base = 1000000000;

  double var;

  q = (int)nr;

  var = nr - q;

  if(nr < 0.0)
  {
    str[j++] = '-';

    if(q < 0)
    {
      q = -q;
    }
  }

  for(i=10; i; i--)
  {
    z = q / base;

    q %= base;

    if(z || flag)
    {
      str[j++] = '0' + z;

      flag = 1;
    }

    base /= 10;
  }

  if(!flag)
  {
    str[j++] = '0';
  }

  base = 100000000;

  var *= (base * 10);

  q = (int)var;

  if(q < 0)
  {
    q = -q;
  }

  if(!q)
  {
    str[j] = 0;

    return(j);
  }

  str[j++] = '.';

  for(i=9; i; i--)
  {
    z = q / base;

    q %= base;

    str[j++] = '0' + z;

    base /= 10;
  }

  str[j] = 0;

  j--;

  for(; j>0; j--)
  {
    if(str[j] == '0')
    {
      str[j] = 0;
    }
    else
    {
      j++;

      break;
    }
  }

  return(j);
}