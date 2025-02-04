
# 1 
void mmove2(int *y, int *x, int y1, int x1, int y2, int x2)
{
 int dy, dx, dist, shift;


 dy = (*y < y1) ? y1 - *y : *y - y1;
 dx = (*x < x1) ? x1 - *x : *x - x1;


 dist = (dy > dx) ? dy : dx;


 dist++;



 dy = (y2 < y1) ? (y1 - y2) : (y2 - y1);
 dx = (x2 < x1) ? (x1 - x2) : (x2 - x1);


 if (!dy && !dx) return;



 if (dy > dx)
 {
# 4957 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/AmyBSOD/ToME-SX/refs/heads/master/src/cave.c"
  shift = (dist * dx + (dy - 1) / 2) / dy;


  (*x) = (x2 < x1) ? (x1 - shift) : (x1 + shift);


  (*y) = (y2 < y1) ? (y1 - dist) : (y1 + dist);
 }


 else
 {
# 4993 "/scratch/repos/new/home/jordi_armengol_estape/c-scraper/outputs/2022-01-22/02-19-57/repos/AmyBSOD/ToME-SX/refs/heads/master/src/cave.c"
  shift = (dist * dy + (dx - 1) / 2) / dx;


  (*y) = (y2 < y1) ? (y1 - shift) : (y1 + shift);


  (*x) = (x2 < x1) ? (x1 - dist) : (x1 + dist);
 }
}