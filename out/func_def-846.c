



# 1 
void energycalc (double *finaltemp, double *sumjoule, int numnod, double dz, double surfdz, double *surface, double *cp, double *density)
{
# 1853 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/YifanCheng/VIC/refs/heads/master/external/VIC/src/lakes.eb.c"
  double energy;
  int k;

  *sumjoule=0.0;

  for(k=0; k<numnod;k++)
    {


      if(k==0)
 energy=(finaltemp[k]+273.15)*surfdz*(1000.+density[k])*cp[k]*(surface[k]+surface[k+1])/2.;
      else if (k==numnod-1)
 energy=(finaltemp[k]+273.15)*dz*(1000.+density[k])*cp[k]*surface[k]/2.;
      else
 energy=(finaltemp[k]+273.15)*dz*(1000.+density[k])*cp[k]*(surface[k]+surface[k+1])/2.;

      *sumjoule+=energy;
    }
}