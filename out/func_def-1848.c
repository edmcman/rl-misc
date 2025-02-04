
# 1 
void BTIC2D_TransWHT_Horz8(int *iblk, int *oblk)
{
 int ib0, ib1, ib2, ib3, ib4, ib5, ib6, ib7;
 int a0, a1, a2, a3, a4, a5, a6, a7;
 int b0, b1, b2, b3, b4, b5, b6, b7;
 int c0, c1, c2, c3, c4, c5, c6, c7;

 ib0=iblk[0]; ib1=iblk[1]; ib2=iblk[2]; ib3=iblk[3];
 ib4=iblk[4]; ib5=iblk[5]; ib6=iblk[6]; ib7=iblk[7];

 a0=ib0+ib4; a1=ib1+ib5;
 a2=ib2+ib6; a3=ib3+ib7;
 a4=(a0>>1)-ib4; a5=(a1>>1)-ib5;
 a6=(a2>>1)-ib6; a7=(a3>>1)-ib7;

 b0=a0+a2; b1=a1+a3;
 b2=(b0>>1)-a2; b3=(b1>>1)-a3;
 b4=a4+a6; b5=a5+a7;
 b6=(b4>>1)-a6; b7=(b5>>1)-a7;

 c0=b0+b1; c1=(c0>>1)-b1;
 c2=b2+b3; c3=(c2>>1)-b3;
 c4=b4+b5; c5=(c4>>1)-b5;
 c6=b6+b7; c7=(c6>>1)-b7;

 oblk[0]=c0; oblk[1]=c4; oblk[2]=c6; oblk[3]=c2;
 oblk[4]=c3; oblk[5]=c7; oblk[6]=c5; oblk[7]=c1;
}