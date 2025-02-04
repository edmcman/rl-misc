
# 1 
int pf_sendall(int s, const char *buf, int *len)
{
   int total = 0;
   int bytesleft = *len;
   int n;

   while(total < *len) {
      n = send(s, buf+total, bytesleft, 0);
      if (n == -1) {
         *len = total;
         return -1;
      }

      total += n;
      bytesleft -= n;
   }




   return 0;

}