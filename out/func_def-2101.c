
# 1 
void blit_2_8_rev(unsigned char pattern0, unsigned char pattern1,
    unsigned char count, unsigned char skip,
    const unsigned char *colors, unsigned char *vbp)
{
    unsigned char chunks_0;
    unsigned char chunks_1;

    chunks_0 = ((pattern1 >> 1) & 0x55) | (pattern0 & 0xaa);
    chunks_1 = (pattern1 & 0x55) | ((pattern0 << 1) & 0xaa);

    switch (skip) {
    case 0:
 if (chunks_1 & 0x03) *vbp = colors[chunks_1 & 3];
 vbp++;
 if (!--count) break;
    case 1:
 if (chunks_0 & 0x03) *vbp = colors[chunks_0 & 3];
 vbp++;
 if (!--count) break;
    case 2:
 if (chunks_1 & 0x0c) *vbp = colors[(chunks_1 >> 2) & 3];
 vbp++;
 if (!--count) break;
    case 3:
 if (chunks_0 & 0x0c) *vbp = colors[(chunks_0 >> 2) & 3];
 vbp++;
 if (!--count) break;
    case 4:
 if (chunks_1 & 0x30) *vbp = colors[(chunks_1 >> 4) & 3];
 vbp++;
 if (!--count) break;
    case 5:
 if (chunks_0 & 0x30) *vbp = colors[(chunks_0 >> 4) & 3];
 vbp++;
 if (!--count) break;
    case 6:
 if (chunks_1 & 0xc0) *vbp = colors[(chunks_1 >> 6) & 3];
 vbp++;
 if (!--count) break;
    case 7:
 if (chunks_0 & 0xc0) *vbp = colors[(chunks_0 >> 6) & 3];
    }
}