#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+18h] [rbp-50h]
float v3; // [rsp+18h] [rbp-50h]
float v4; // [rsp+1Ch] [rbp-4Ch]
float v5; // [rsp+1Ch] [rbp-4Ch]
float v6; // [rsp+1Ch] [rbp-4Ch]
float v7; // [rsp+20h] [rbp-48h]
float v8; // [rsp+20h] [rbp-48h]
float v9; // [rsp+20h] [rbp-48h]
float v10; // [rsp+24h] [rbp-44h]
float v11; // [rsp+24h] [rbp-44h]
float v12; // [rsp+24h] [rbp-44h]
float v13; // [rsp+28h] [rbp-40h]
float v14; // [rsp+28h] [rbp-40h]
float v15; // [rsp+28h] [rbp-40h]
float v16; // [rsp+28h] [rbp-40h]
float v17; // [rsp+2Ch] [rbp-3Ch]
float v18; // [rsp+2Ch] [rbp-3Ch]
float v19; // [rsp+2Ch] [rbp-3Ch]
float v20; // [rsp+2Ch] [rbp-3Ch]
float v21; // [rsp+30h] [rbp-38h]
float v22; // [rsp+30h] [rbp-38h]
float v23; // [rsp+34h] [rbp-34h]
float v24; // [rsp+34h] [rbp-34h]
float v25; // [rsp+38h] [rbp-30h]
float v26; // [rsp+38h] [rbp-30h]
float v27; // [rsp+38h] [rbp-30h]
float v28; // [rsp+3Ch] [rbp-2Ch]
float v29; // [rsp+3Ch] [rbp-2Ch]
float v30; // [rsp+3Ch] [rbp-2Ch]
float v31; // [rsp+40h] [rbp-28h]
float v32; // [rsp+40h] [rbp-28h]
float v33; // [rsp+40h] [rbp-28h]
float v34; // [rsp+44h] [rbp-24h]
float v35; // [rsp+44h] [rbp-24h]
float v36; // [rsp+44h] [rbp-24h]
float v37; // [rsp+48h] [rbp-20h]
float v38; // [rsp+48h] [rbp-20h]
float v39; // [rsp+48h] [rbp-20h]
float v40; // [rsp+48h] [rbp-20h]
float v41; // [rsp+4Ch] [rbp-1Ch]
float v42; // [rsp+4Ch] [rbp-1Ch]
float v43; // [rsp+4Ch] [rbp-1Ch]
float v44; // [rsp+4Ch] [rbp-1Ch]
float v45; // [rsp+50h] [rbp-18h]
float v46; // [rsp+50h] [rbp-18h]
float v47; // [rsp+54h] [rbp-14h]
float v48; // [rsp+54h] [rbp-14h]
float v49; // [rsp+58h] [rbp-10h]
float v50; // [rsp+58h] [rbp-10h]
float v51; // [rsp+58h] [rbp-10h]
float v52; // [rsp+5Ch] [rbp-Ch]
float v53; // [rsp+5Ch] [rbp-Ch]
float v54; // [rsp+5Ch] [rbp-Ch]
float v55; // [rsp+60h] [rbp-8h]
float v56; // [rsp+60h] [rbp-8h]
float v57; // [rsp+60h] [rbp-8h]
float v58; // [rsp+64h] [rbp-4h]
float v59; // [rsp+64h] [rbp-4h]
float v60; // [rsp+64h] [rbp-4h]

v4 = a1[1];
v7 = a1[8];
v10 = a1[9];
v13 = a1[4];
v17 = a1[5];
v21 = a1[12];
v23 = a1[13];
v25 = a1[2];
v28 = a1[3];
v31 = a1[10];
v34 = a1[11];
v37 = a1[6];
v41 = a1[7];
v45 = a1[14];
v47 = a1[15];
v49 = *a1 + v7;
v52 = v4 + v10;
v8 = *a1 - v7;
v11 = v4 - v10;
v55 = v13 - v21;
v58 = v17 - v23;
v14 = v13 + v21;
v18 = v17 + v23;
v2 = v49 + v14;
v5 = v52 + v18;
v15 = v49 - v14;
v19 = v52 - v18;
v22 = v8 - v58;
v24 = v11 + v55;
v9 = v8 + v58;
v12 = v11 - v55;
v50 = v25 + v31;
v53 = v28 + v34;
v32 = v25 - v31;
v35 = v28 - v34;
v56 = v37 - v45;
v59 = v41 - v47;
v38 = v37 + v45;
v42 = v41 + v47;
v26 = v50 + v38;
v29 = v53 + v42;
v39 = v50 - v38;
v43 = v53 - v42;
v46 = v32 - v59;
v48 = v35 + v56;
v33 = v32 + v59;
v36 = v35 - v56;
v51 = v2 - v26;
v54 = v5 - v29;
v3 = v2 + v26;
v6 = v5 + v29;
v57 = v15 - v43;
v60 = v19 + v39;
v16 = v15 + v43;
v20 = v19 - v39;
v27 = (float)(v9 - (float)(v33 * 0.70710677)) - (float)(v36 * 0.70710677);
v30 = (float)((float)(v33 * 0.70710677) + v12) - (float)(v36 * 0.70710677);
v40 = (float)((float)(v46 * 0.70710677) + v22) - (float)(v48 * 0.70710677);
v44 = (float)(v48 * 0.70710677) + (float)((float)(v46 * 0.70710677) + v24);
*a1 = v3;
a1[1] = v6;
a1[2] = (float)(v9 * 2.0) - v27;
a1[3] = (float)(v12 * 2.0) - v30;
a1[4] = v16;
a1[5] = v20;
a1[6] = (float)(v22 * 2.0) - v40;
a1[7] = (float)(v24 * 2.0) - v44;
a1[8] = v51;
a1[9] = v54;
a1[10] = v27;
a1[11] = v30;
a1[12] = v57;
a1[13] = v60;
a1[14] = v40;
result = a1 + 15;
a1[15] = v44;
return result;
}