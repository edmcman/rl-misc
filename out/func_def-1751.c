
# 1 
void
rmRGBtoHSV (float rr,
     float gg,
     float bb,
     float *hh,
     float *ss,
     float *vv)
{
   double min, max, v, s, h, rc, gc, bc, r, g, b;


    r = rr;
    g = gg;
    b = bb;

    max = ((r) > (g) ? (r) : (g));
    max = ((max) > (b) ? (max) : (b));

    min = ((r) < (g) ? (r) : (g));
    min = ((min) < (b) ? (min) : (b));

    v = max;

    if (max != 0.0)
 s = (max - min) / max;
    else
 s = 0.0;

    if (s == 0)

      h = 0.0;
    else
    {
 rc = (max - r) / (max - min);
 gc = (max - g) / (max - min);
 bc = (max - b) / (max - min);
 if (r == max)
     h = bc - gc;
 else
    if (g == max)
       h = 2 + rc - bc;
 else
    if (b == max)
       h = 4 + gc - rc;
 h = h * 60;
 if (h < 0.0)
     h = h + 360.0;
    }
    *hh = h / 360.0;
    *ss = s;
    *vv = v;
}