
# 1 
void findmaxmin(int data,int *pmax,int *pmin)
{
 (*pmax)=-1;
 (*pmin)=10;
 while(data){if(data%10>(*pmax))
   (*pmax)=data%10;
   if (data%10<(*pmin))
   (*pmin)=data%10;
 data=data/10;



      }


return 0;

}