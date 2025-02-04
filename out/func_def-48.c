
# 1 
void
reverse(char *s)
{
 register char *d,*f,c;
 register int quote = 0;

 f=d=s;
 while (*d)
  d++;
 while ( --d > f )
 { c=*f;
  *f++=*d;
  *d=c;
 }
 for ( d=s; *d; d++ )
  switch (*d)
  {
  case '\'': if ( ! quote )
     quote |= 0x1;
    else if ( quote & 0x1 )
     if ( d[1]!='\\' )
      quote &= ~0x1;
    break;
  case '\"': if ( ! quote )
     quote |= 0x2;
    else if ( quote & 0x2 )
     if ( d[1]!='\\' )
      quote &= ~0x2;
    break;
  case '\\': if ( quote )
    { d[0]=d[-1];
     d[-1]='\\';
    }
    break;
  }
}