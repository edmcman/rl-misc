#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2)
{
float *result; // rax
float v3; // [rsp+1Ch] [rbp-50h]
float v4; // [rsp+1Ch] [rbp-50h]
float v5; // [rsp+1Ch] [rbp-50h]
float v6; // [rsp+1Ch] [rbp-50h]
float v7; // [rsp+1Ch] [rbp-50h]
float v8; // [rsp+1Ch] [rbp-50h]
float v9; // [rsp+20h] [rbp-4Ch]
float v10; // [rsp+20h] [rbp-4Ch]
float v11; // [rsp+20h] [rbp-4Ch]
float v12; // [rsp+20h] [rbp-4Ch]
float v13; // [rsp+20h] [rbp-4Ch]
float v14; // [rsp+20h] [rbp-4Ch]
float v15; // [rsp+20h] [rbp-4Ch]
float v16; // [rsp+24h] [rbp-48h]
float v17; // [rsp+24h] [rbp-48h]
float v18; // [rsp+24h] [rbp-48h]
float v19; // [rsp+24h] [rbp-48h]
float v20; // [rsp+28h] [rbp-44h]
float v21; // [rsp+28h] [rbp-44h]
float v22; // [rsp+28h] [rbp-44h]
float v23; // [rsp+28h] [rbp-44h]
float v24; // [rsp+2Ch] [rbp-40h]
float v25; // [rsp+2Ch] [rbp-40h]
float v26; // [rsp+2Ch] [rbp-40h]
float v27; // [rsp+2Ch] [rbp-40h]
float v28; // [rsp+2Ch] [rbp-40h]
float v29; // [rsp+30h] [rbp-3Ch]
float v30; // [rsp+30h] [rbp-3Ch]
float v31; // [rsp+30h] [rbp-3Ch]
float v32; // [rsp+30h] [rbp-3Ch]
float v33; // [rsp+30h] [rbp-3Ch]
float v34; // [rsp+34h] [rbp-38h]
float v35; // [rsp+34h] [rbp-38h]
float v36; // [rsp+34h] [rbp-38h]
float v37; // [rsp+34h] [rbp-38h]
float v38; // [rsp+34h] [rbp-38h]
float v39; // [rsp+38h] [rbp-34h]
float v40; // [rsp+38h] [rbp-34h]
float v41; // [rsp+38h] [rbp-34h]
float v42; // [rsp+38h] [rbp-34h]
float v43; // [rsp+38h] [rbp-34h]
float v44; // [rsp+3Ch] [rbp-30h]
float v45; // [rsp+3Ch] [rbp-30h]
float v46; // [rsp+3Ch] [rbp-30h]
float v47; // [rsp+40h] [rbp-2Ch]
float v48; // [rsp+40h] [rbp-2Ch]
float v49; // [rsp+40h] [rbp-2Ch]
float v50; // [rsp+44h] [rbp-28h]
float v51; // [rsp+44h] [rbp-28h]
float v52; // [rsp+44h] [rbp-28h]
float v53; // [rsp+44h] [rbp-28h]
float v54; // [rsp+48h] [rbp-24h]
float v55; // [rsp+48h] [rbp-24h]
float v56; // [rsp+48h] [rbp-24h]
float v57; // [rsp+48h] [rbp-24h]
float v58; // [rsp+4Ch] [rbp-20h]
float v59; // [rsp+4Ch] [rbp-20h]
float v60; // [rsp+4Ch] [rbp-20h]
float v61; // [rsp+50h] [rbp-1Ch]
float v62; // [rsp+50h] [rbp-1Ch]
float v63; // [rsp+50h] [rbp-1Ch]
float v64; // [rsp+54h] [rbp-18h]
float v65; // [rsp+54h] [rbp-18h]
float v66; // [rsp+54h] [rbp-18h]
float v67; // [rsp+58h] [rbp-14h]
float v68; // [rsp+58h] [rbp-14h]
float v69; // [rsp+58h] [rbp-14h]
float v70; // [rsp+5Ch] [rbp-10h]
float v71; // [rsp+5Ch] [rbp-10h]
float v72; // [rsp+5Ch] [rbp-10h]
float v73; // [rsp+60h] [rbp-Ch]
float v74; // [rsp+60h] [rbp-Ch]
float v75; // [rsp+60h] [rbp-Ch]
float v76; // [rsp+64h] [rbp-8h]
float v77; // [rsp+64h] [rbp-8h]
float v78; // [rsp+64h] [rbp-8h]
float v79; // [rsp+64h] [rbp-8h]
float v80; // [rsp+64h] [rbp-8h]
float v81; // [rsp+64h] [rbp-8h]
float v82; // [rsp+68h] [rbp-4h]
float v83; // [rsp+68h] [rbp-4h]
float v84; // [rsp+68h] [rbp-4h]

v9 = a1[1];
v16 = a1[2];
v20 = a1[3];
v24 = a1[4];
v29 = a1[5];
v34 = a1[6];
v39 = a1[7];
v44 = a1[8] * 2.0;
v47 = a1[9] * 2.0;
v50 = a1[10];
v54 = a1[11];
v58 = a1[12];
v61 = a1[13];
v64 = a1[14];
v67 = a1[15];
v70 = *a1 + v9;
v73 = *a1 - v9;
v3 = v24 + v58;
v10 = v29 - v61;
v76 = v24 - v58;
v25 = (float)((float)(v24 + v58) - (float)(0.70710677 * (float)(v24 - v58)))
- (float)(0.70710677 * (float)(v29 + v61));
v30 = (float)((float)(0.70710677 * v76) + (float)(v29 - v61)) - (float)(0.70710677 * (float)(v29 + v61));
v59 = (float)(2.0 * v3) - v25;
v62 = v30 - (float)(2.0 * v10);
v4 = v16 + v64;
v11 = v20 - v67;
v77 = v16 - v64;
v17 = (float)((float)(v16 + v64) - (float)(0.38268343 * (float)(v16 - v64))) - (float)(0.9238795 * (float)(v20 + v67));
v21 = (float)((float)(0.9238795 * v77) + (float)(v20 - v67)) - (float)(0.38268343 * (float)(v20 + v67));
v65 = (float)(2.0 * v4) - v17;
v68 = v21 - (float)(2.0 * v11);
v5 = v34 + v50;
v12 = v39 - v54;
v78 = v34 - v50;
v35 = (float)((float)(v34 + v50) - (float)(0.9238795 * (float)(v34 - v50))) - (float)(0.38268343 * (float)(v39 + v54));
v40 = (float)((float)(0.38268343 * v78) + (float)(v39 - v54)) - (float)(0.9238795 * (float)(v39 + v54));
v51 = (float)(2.0 * v5) - v35;
v55 = v40 - (float)(2.0 * v12);
v6 = v70 + v44;
v13 = v73 - v47;
v45 = v70 - v44;
v48 = v47 + v73;
v79 = v25 - v59;
v82 = v30 - v62;
v26 = v25 + v59;
v31 = v30 + v62;
v71 = v6 + v26;
v74 = v13 + v31;
v27 = v6 - v26;
v32 = v13 - v31;
v60 = v45 + v82;
v63 = v48 - v79;
v46 = v45 - v82;
v49 = v48 + v79;
v7 = v17 + v51;
v14 = v21 + v55;
v52 = v17 - v51;
v56 = v21 - v55;
v80 = v35 - v65;
v83 = v40 - v68;
v36 = v35 + v65;
v41 = v40 + v68;
v18 = v7 + v36;
v22 = v14 + v41;
v37 = v7 - v36;
v42 = v14 - v41;
v66 = v52 + v83;
v69 = v56 - v80;
v53 = v52 - v83;
v57 = v56 + v80;
v8 = v71 - v18;
v15 = v74 - v22;
v72 = v71 + v18;
v75 = v74 + v22;
v81 = v27 + v42;
v84 = v32 - v37;
v28 = v27 - v42;
v33 = v32 + v37;
v19 = (float)(v57 * 0.70710677) + (float)(v46 - (float)(v53 * 0.70710677));
v23 = (float)(v49 - (float)(v53 * 0.70710677)) - (float)(v57 * 0.70710677);
v38 = (float)(v69 * 0.70710677) + (float)((float)(v66 * 0.70710677) + v60);
v43 = (float)(v69 * 0.70710677) + (float)(v63 - (float)(v66 * 0.70710677));
*a1 = a2 * v72;
a1[1] = a2 * v75;
a1[2] = a2 * (float)((float)(v46 * 2.0) - v19);
a1[3] = a2 * (float)((float)(v49 * 2.0) - v23);
a1[4] = a2 * v28;
a1[5] = a2 * v33;
a1[6] = a2 * (float)((float)(v60 * 2.0) - v38);
a1[7] = a2 * (float)((float)(v63 * 2.0) - v43);
a1[8] = a2 * v8;
a1[9] = a2 * v15;
a1[10] = a2 * v19;
a1[11] = a2 * v23;
a1[12] = a2 * v81;
a1[13] = a2 * v84;
a1[14] = a2 * v38;
result = a1 + 15;
a1[15] = a2 * v43;
return result;
}