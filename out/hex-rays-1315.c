#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+28h] [rbp-50h]
float v3; // [rsp+28h] [rbp-50h]
float v4; // [rsp+28h] [rbp-50h]
float v5; // [rsp+28h] [rbp-50h]
float v6; // [rsp+28h] [rbp-50h]
float v7; // [rsp+2Ch] [rbp-4Ch]
float v8; // [rsp+2Ch] [rbp-4Ch]
float v9; // [rsp+2Ch] [rbp-4Ch]
float v10; // [rsp+2Ch] [rbp-4Ch]
float v11; // [rsp+2Ch] [rbp-4Ch]
float v12; // [rsp+2Ch] [rbp-4Ch]
float v13; // [rsp+30h] [rbp-48h]
float v14; // [rsp+30h] [rbp-48h]
float v15; // [rsp+30h] [rbp-48h]
float v16; // [rsp+30h] [rbp-48h]
float v17; // [rsp+30h] [rbp-48h]
float v18; // [rsp+34h] [rbp-44h]
float v19; // [rsp+34h] [rbp-44h]
float v20; // [rsp+34h] [rbp-44h]
float v21; // [rsp+34h] [rbp-44h]
float v22; // [rsp+34h] [rbp-44h]
float v23; // [rsp+38h] [rbp-40h]
float v24; // [rsp+38h] [rbp-40h]
float v25; // [rsp+38h] [rbp-40h]
float v26; // [rsp+38h] [rbp-40h]
float v27; // [rsp+38h] [rbp-40h]
float v28; // [rsp+3Ch] [rbp-3Ch]
float v29; // [rsp+3Ch] [rbp-3Ch]
float v30; // [rsp+3Ch] [rbp-3Ch]
float v31; // [rsp+3Ch] [rbp-3Ch]
float v32; // [rsp+3Ch] [rbp-3Ch]
float v33; // [rsp+40h] [rbp-38h]
float v34; // [rsp+40h] [rbp-38h]
float v35; // [rsp+40h] [rbp-38h]
float v36; // [rsp+40h] [rbp-38h]
float v37; // [rsp+44h] [rbp-34h]
float v38; // [rsp+44h] [rbp-34h]
float v39; // [rsp+44h] [rbp-34h]
float v40; // [rsp+44h] [rbp-34h]
float v41; // [rsp+48h] [rbp-30h]
float v42; // [rsp+48h] [rbp-30h]
float v43; // [rsp+48h] [rbp-30h]
float v44; // [rsp+4Ch] [rbp-2Ch]
float v45; // [rsp+4Ch] [rbp-2Ch]
float v46; // [rsp+4Ch] [rbp-2Ch]
float v47; // [rsp+50h] [rbp-28h]
float v48; // [rsp+50h] [rbp-28h]
float v49; // [rsp+50h] [rbp-28h]
float v50; // [rsp+50h] [rbp-28h]
float v51; // [rsp+54h] [rbp-24h]
float v52; // [rsp+54h] [rbp-24h]
float v53; // [rsp+54h] [rbp-24h]
float v54; // [rsp+54h] [rbp-24h]
float v55; // [rsp+58h] [rbp-20h]
float v56; // [rsp+58h] [rbp-20h]
float v57; // [rsp+58h] [rbp-20h]
float v58; // [rsp+58h] [rbp-20h]
float v59; // [rsp+58h] [rbp-20h]
float v60; // [rsp+5Ch] [rbp-1Ch]
float v61; // [rsp+5Ch] [rbp-1Ch]
float v62; // [rsp+5Ch] [rbp-1Ch]
float v63; // [rsp+5Ch] [rbp-1Ch]
float v64; // [rsp+5Ch] [rbp-1Ch]
float v65; // [rsp+60h] [rbp-18h]
float v66; // [rsp+60h] [rbp-18h]
float v67; // [rsp+64h] [rbp-14h]
float v68; // [rsp+64h] [rbp-14h]
float v69; // [rsp+64h] [rbp-14h]
float v70; // [rsp+64h] [rbp-14h]
float v71; // [rsp+64h] [rbp-14h]
float v72; // [rsp+68h] [rbp-10h]
float v73; // [rsp+68h] [rbp-10h]
float v74; // [rsp+68h] [rbp-10h]
float v75; // [rsp+6Ch] [rbp-Ch]
float v76; // [rsp+6Ch] [rbp-Ch]
float v77; // [rsp+6Ch] [rbp-Ch]
float v78; // [rsp+70h] [rbp-8h]
float v79; // [rsp+70h] [rbp-8h]
float v80; // [rsp+70h] [rbp-8h]
float v81; // [rsp+70h] [rbp-8h]
float v82; // [rsp+74h] [rbp-4h]
float v83; // [rsp+74h] [rbp-4h]
float v84; // [rsp+74h] [rbp-4h]
float v85; // [rsp+74h] [rbp-4h]

v7 = a1[1];
v13 = a1[8];
v18 = a1[9];
v23 = a1[4];
v28 = a1[5];
v33 = a1[12];
v37 = a1[13];
v41 = a1[2];
v44 = a1[3];
v47 = a1[10];
v51 = a1[11];
v55 = a1[6];
v60 = a1[7];
v65 = a1[14];
v67 = a1[15];
v72 = *a1 + v13;
v75 = v7 + v18;
v14 = *a1 - v13;
v19 = v7 - v18;
v78 = v23 - v33;
v82 = v28 - v37;
v24 = v23 + v33;
v29 = v28 + v37;
v2 = v72 + v24;
v8 = v75 + v29;
v25 = v72 - v24;
v30 = v75 - v29;
v34 = v14 - v82;
v38 = v19 + v78;
v15 = v14 + v82;
v20 = v19 - v78;
v73 = v41 + v47;
v76 = v44 + v51;
v48 = v41 - v47;
v52 = v44 - v51;
v79 = v55 - v65;
v83 = v60 - v67;
v56 = v55 + v65;
v61 = v60 + v67;
v42 = v73 + v56;
v45 = v76 + v61;
v57 = v73 - v56;
v62 = v76 - v61;
v66 = v48 - v83;
v68 = v52 + v79;
v49 = v48 + v83;
v53 = v52 - v79;
v74 = v2 - v42;
v77 = v45 - v8;
v3 = v2 + v42;
v9 = v8 + v45;
v80 = v25 - v62;
v84 = v30 + v57;
v26 = v25 + v62;
v31 = v30 - v57;
v43 = (float)(v15 - (float)(v49 * 0.70710677)) - (float)(v53 * 0.70710677);
v46 = (float)((float)(v49 * 0.70710677) + v20) - (float)(v53 * 0.70710677);
v16 = (float)(v15 * 2.0) - v43;
v21 = (float)(v20 * 2.0) - v46;
v58 = (float)((float)(v66 * 0.70710677) + v34) - (float)(v68 * 0.70710677);
v63 = (float)(v68 * 0.70710677) + (float)((float)(v66 * 0.70710677) + v38);
v35 = (float)(v34 * 2.0) - v58;
v39 = (float)(v38 * 2.0) - v63;
v50 = v3 + v9;
v54 = v3 - v9;
v4 = v26 + v80;
v10 = v31 - v84;
v69 = v80 - v26;
v27 = (float)(0.70710677 * (float)(v80 - v26))
+ (float)((float)(0.70710677 * (float)(v31 + v84)) + (float)(v26 + v80));
v32 = (float)(0.70710677 * v69) + (float)((float)(v31 - v84) - (float)(0.70710677 * (float)(v31 + v84)));
v81 = (float)(2.0 * v4) - v27;
v85 = v32 - (float)(2.0 * v10);
v5 = v16 + v58;
v11 = v21 - v63;
v70 = v58 - v16;
v17 = (float)(0.38268343 * (float)(v58 - v16)) + (float)((float)(0.9238795 * (float)(v21 + v63)) + (float)(v16 + v58));
v22 = (float)(0.9238795 * v70) + (float)((float)(v21 - v63) - (float)(0.38268343 * (float)(v21 + v63)));
v59 = (float)(2.0 * v5) - v17;
v64 = v22 - (float)(2.0 * v11);
v6 = v35 + v43;
v12 = v39 - v46;
v71 = v43 - v35;
v36 = (float)(0.9238795 * (float)(v43 - v35)) + (float)((float)(0.38268343 * (float)(v39 + v46)) + (float)(v35 + v43));
v40 = (float)(0.38268343 * v71) + (float)((float)(v39 - v46) - (float)(0.9238795 * (float)(v39 + v46)));
a1[8] = v74;
a1[9] = v77;
*a1 = v50;
a1[1] = v54;
a1[4] = 0.5 * v27;
a1[5] = 0.5 * v32;
a1[12] = 0.5 * v81;
a1[13] = 0.5 * v85;
a1[2] = 0.5 * v17;
a1[3] = 0.5 * v22;
a1[6] = 0.5 * v36;
a1[7] = 0.5 * v40;
a1[10] = 0.5 * (float)((float)(2.0 * v6) - v36);
a1[11] = 0.5 * (float)(v40 - (float)(2.0 * v12));
a1[14] = 0.5 * v59;
result = a1 + 15;
a1[15] = 0.5 * v64;
return result;
}