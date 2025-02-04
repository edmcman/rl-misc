
# 1 
int ringbuffer(unsigned char rw, unsigned char *data, unsigned int count)
{
    static volatile unsigned char buffer[384];

 static volatile unsigned int read_pointer, write_pointer;
 static volatile unsigned int content=0;
 unsigned int p=0;
    unsigned int p2=0;

 if(rw==1)
 {
  if(count<384 -content)
  {
   while(p<count)
   {
    buffer[write_pointer++]=data[p++];
   }
            content+=count;
            return(1);
  }
 }
 else if(rw==0)
 {
  if(content>=count)
  {
   while(p2<count)
   {
    data[p2++]=buffer[read_pointer++];
   }
            content-=count;
            if(!content)
            {
             write_pointer=0;
             read_pointer=0;
            }
   return(1);
  }
 }
        else if(rw==2)
        {
          if(content) return 0;
          else return(384 -11);
        }

 return(0);
}