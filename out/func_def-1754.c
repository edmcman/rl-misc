
# 1 
void BTIC2D_TransDCT_Horiz(int *iblk, int *oblk)
{
 int ib0, ib1, ib2, ib3, ib4, ib5, ib6, ib7;
 int ib0p7, ib1p6, ib2p5, ib3p4;
 int ib0n7, ib1n6, ib2n5, ib3n4;
 int ib0p7n3n4, ib1p6n2n5;

 ib0=iblk[0]; ib1=iblk[1];
 ib2=iblk[2]; ib3=iblk[3];
 ib4=iblk[4]; ib5=iblk[5];
 ib6=iblk[6]; ib7=iblk[7];

 ib0p7=ib0+ib7; ib1p6=ib1+ib6;
 ib2p5=ib2+ib5; ib3p4=ib3+ib4;
 ib0n7=ib0-ib7; ib1n6=ib1-ib6;
 ib2n5=ib2-ib5; ib3n4=ib3-ib4;

 oblk[0]=(ib0p7+ib1p6+ib2p5+ib3p4)*91;
 oblk[4]=(ib0p7-ib1p6-ib2p5+ib3p4)*91;

 ib0p7n3n4=ib0p7-ib3p4;
 ib1p6n2n5=ib1p6-ib2p5;
 oblk[2]=ib0p7n3n4*118 +ib1p6n2n5* 49;
 oblk[6]=ib0p7n3n4* 49 -ib1p6n2n5*118;

 oblk[1]=ib0n7*126 +ib1n6*106 +ib2n5* 71 +ib3n4* 25;
 oblk[3]=ib0n7*106 -ib1n6* 25 -ib2n5*126 -ib3n4* 71;
 oblk[5]=ib0n7* 71 -ib1n6*126 +ib2n5* 25 +ib3n4*106;
 oblk[7]=ib0n7* 25 -ib1n6* 71 +ib2n5*106 -ib3n4*126;
}