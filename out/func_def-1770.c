
# 1 
char* strcpy_back(char* to, const char* from)
{
 const char* start_ptr = from - 1;
 char to_nt_hit = 0;


 for(; *from != '\0'; ++from, ++to)
  if(*to == '\0')
   to_nt_hit = 1;


 if(*to == '\0' || to_nt_hit)
  *(to + 1) = '\0';


 for(; from != start_ptr; --from, --to)
  *to = *from;

 return(to);
}