#include <stdio.h>

#include <assert.h>

# 1 
void bn_sqr_comba4(unsigned int *r, const unsigned int *a) {



    unsigned int bl, bh;

    unsigned int t1, t2;
    unsigned int c1, c2, c3;

    c1 = 0;
    c2 = 0;
    c3 = 0;
    { unsigned int l, h, m; h = ((a)[0]); l = ((h) & (0xffff)); h = (((h) >> 16) & (0xffff)); m = (l) * (h); l *= l; h *= h; h += (m & (0xffff8000L)) >> (16 - 1); m = (m & (0xffff)) << (16 + 1); l = (l + m) & (0xffffffffL); if (l < m) { h++; } (t1) = l; (t2) = h; }; c1 = (c1 + t1) & (0xffffffffL); if ((c1) < t1) { t2++; } c2 = (c2 + t2) & (0xffffffffL); if ((c2) < t2) { c3++; };
    r[0] = c1;
    c1 = 0;
    t1 = (((a)[1]) & (0xffff)); t2 = ((((a)[1]) >> 16) & (0xffff)); bl = (((a)[0]) & (0xffff)); bh = ((((a)[0]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c1++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c2 = (c2 + t1) & (0xffffffffL); if ((c2 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c1++; } c3 = (c3 + t2) & (0xffffffffL); if ((c3) < t2) { c1++; };
    r[1] = c2;
    c2 = 0;
    { unsigned int l, h, m; h = ((a)[1]); l = ((h) & (0xffff)); h = (((h) >> 16) & (0xffff)); m = (l) * (h); l *= l; h *= h; h += (m & (0xffff8000L)) >> (16 - 1); m = (m & (0xffff)) << (16 + 1); l = (l + m) & (0xffffffffL); if (l < m) { h++; } (t1) = l; (t2) = h; }; c3 = (c3 + t1) & (0xffffffffL); if ((c3) < t1) { t2++; } c1 = (c1 + t2) & (0xffffffffL); if ((c1) < t2) { c2++; };
    t1 = (((a)[2]) & (0xffff)); t2 = ((((a)[2]) >> 16) & (0xffff)); bl = (((a)[0]) & (0xffff)); bh = ((((a)[0]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c2++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c3 = (c3 + t1) & (0xffffffffL); if ((c3 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c2++; } c1 = (c1 + t2) & (0xffffffffL); if ((c1) < t2) { c2++; };
    r[2] = c3;
    c3 = 0;
    t1 = (((a)[3]) & (0xffff)); t2 = ((((a)[3]) >> 16) & (0xffff)); bl = (((a)[0]) & (0xffff)); bh = ((((a)[0]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c3++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c1 = (c1 + t1) & (0xffffffffL); if ((c1 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c3++; } c2 = (c2 + t2) & (0xffffffffL); if ((c2) < t2) { c3++; };
    t1 = (((a)[2]) & (0xffff)); t2 = ((((a)[2]) >> 16) & (0xffff)); bl = (((a)[1]) & (0xffff)); bh = ((((a)[1]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c3++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c1 = (c1 + t1) & (0xffffffffL); if ((c1 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c3++; } c2 = (c2 + t2) & (0xffffffffL); if ((c2) < t2) { c3++; };
    r[3] = c1;
    c1 = 0;
    { unsigned int l, h, m; h = ((a)[2]); l = ((h) & (0xffff)); h = (((h) >> 16) & (0xffff)); m = (l) * (h); l *= l; h *= h; h += (m & (0xffff8000L)) >> (16 - 1); m = (m & (0xffff)) << (16 + 1); l = (l + m) & (0xffffffffL); if (l < m) { h++; } (t1) = l; (t2) = h; }; c2 = (c2 + t1) & (0xffffffffL); if ((c2) < t1) { t2++; } c3 = (c3 + t2) & (0xffffffffL); if ((c3) < t2) { c1++; };
    t1 = (((a)[3]) & (0xffff)); t2 = ((((a)[3]) >> 16) & (0xffff)); bl = (((a)[1]) & (0xffff)); bh = ((((a)[1]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c1++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c2 = (c2 + t1) & (0xffffffffL); if ((c2 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c1++; } c3 = (c3 + t2) & (0xffffffffL); if ((c3) < t2) { c1++; };
    r[4] = c2;
    c2 = 0;
    t1 = (((a)[3]) & (0xffff)); t2 = ((((a)[3]) >> 16) & (0xffff)); bl = (((a)[2]) & (0xffff)); bh = ((((a)[2]) >> 16) & (0xffff)); { unsigned int m, m1, lt, ht; lt = t1; ht = t2; m = (bh) * (lt); lt = (bl) * (lt); m1 = (bl) * (ht); ht = (bh) * (ht); m = (m + m1) & (0xffffffffL); if (m < m1) { ht += ((unsigned int)((1L) & (0xffff)) << 16); } ht += (((m) >> 16) & (0xffff)); m1 = ((unsigned int)((m) & (0xffff)) << 16); lt = (lt + m1) & (0xffffffffL); if (lt < m1) { ht++; } (t1) = lt; (t2) = ht; }; if (t2 & (0x80000000L)) { c2++; } t2 = (t2 + t2) & (0xffffffffL); if (t1 & (0x80000000L)) { t2++; } t1 = (t1 + t1) & (0xffffffffL); c3 = (c3 + t1) & (0xffffffffL); if ((c3 < t1) && (((++t2) & (0xffffffffL)) == 0)) { c2++; } c1 = (c1 + t2) & (0xffffffffL); if ((c1) < t2) { c2++; };
    r[5] = c3;
    c3 = 0;
    { unsigned int l, h, m; h = ((a)[3]); l = ((h) & (0xffff)); h = (((h) >> 16) & (0xffff)); m = (l) * (h); l *= l; h *= h; h += (m & (0xffff8000L)) >> (16 - 1); m = (m & (0xffff)) << (16 + 1); l = (l + m) & (0xffffffffL); if (l < m) { h++; } (t1) = l; (t2) = h; }; c1 = (c1 + t1) & (0xffffffffL); if ((c1) < t1) { t2++; } c2 = (c2 + t2) & (0xffffffffL); if ((c2) < t2) { c3++; };
    r[6] = c1;
    r[7] = c2;
}