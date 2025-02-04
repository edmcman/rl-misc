




# 1 
static void calc_center(float side, float j, float i, float *x, float *y) {

  int gridx,gridy;

  float secx,secy;

  float sidex=side*1.73205080757f;
  float sidey=side*1.5;

  float hsidex=sidex/2.,hsidey=sidey/2.;

  i-=side/5.3;

  if (i>0.) i+=hsidey;
  else i-=hsidey;
  if (j>0.) j+=hsidex;
  else j-=hsidex;



  gridy=i/sidey;
  gridx=j/sidex;


  *y=gridy*sidey;
  *x=gridx*sidex;

  secy=i-*y;
  secx=j-*x;

  if (secy<0.) secy+=sidey;
  if (secx<0.) secx+=sidex;

  if (!(gridy&1)) {


    if (secy>(sidey-(hsidex-secx)*0.43301270189f)) {
      *y+=sidey;
      *x-=hsidex;
    } else if (secy>sidey-(secx-hsidex)*0.43301270189f) {
      *y+=sidey;
      *x+=hsidex;
    }
  }


  else {

    if (secx<=hsidex) {
      if (secy<(sidey-secx*0.43301270189f)) {
        *x-=hsidex;
      } else *y+=sidey;
    } else {
      if (secy<sidey-(sidex-secx)*0.43301270189f) {
        *x+=hsidex;
      } else *y+=sidey;
    }
  }
}