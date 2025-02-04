






# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+18h] [rbp-A0h]
float v3; // [rsp+18h] [rbp-A0h]
float v4; // [rsp+18h] [rbp-A0h]
float v5; // [rsp+18h] [rbp-A0h]
float v6; // [rsp+1Ch] [rbp-9Ch]
float v7; // [rsp+1Ch] [rbp-9Ch]
float v8; // [rsp+1Ch] [rbp-9Ch]
float v9; // [rsp+1Ch] [rbp-9Ch]
float v10; // [rsp+20h] [rbp-98h]
float v11; // [rsp+20h] [rbp-98h]
float v12; // [rsp+20h] [rbp-98h]
float v13; // [rsp+20h] [rbp-98h]
float v14; // [rsp+24h] [rbp-94h]
float v15; // [rsp+24h] [rbp-94h]
float v16; // [rsp+24h] [rbp-94h]
float v17; // [rsp+24h] [rbp-94h]
float v18; // [rsp+28h] [rbp-90h]
float v19; // [rsp+28h] [rbp-90h]
float v20; // [rsp+28h] [rbp-90h]
float v21; // [rsp+28h] [rbp-90h]
float v22; // [rsp+28h] [rbp-90h]
float v23; // [rsp+2Ch] [rbp-8Ch]
float v24; // [rsp+2Ch] [rbp-8Ch]
float v25; // [rsp+2Ch] [rbp-8Ch]
float v26; // [rsp+2Ch] [rbp-8Ch]
float v27; // [rsp+2Ch] [rbp-8Ch]
float v28; // [rsp+30h] [rbp-88h]
float v29; // [rsp+30h] [rbp-88h]
float v30; // [rsp+30h] [rbp-88h]
float v31; // [rsp+30h] [rbp-88h]
float v32; // [rsp+30h] [rbp-88h]
float v33; // [rsp+34h] [rbp-84h]
float v34; // [rsp+34h] [rbp-84h]
float v35; // [rsp+34h] [rbp-84h]
float v36; // [rsp+34h] [rbp-84h]
float v37; // [rsp+34h] [rbp-84h]
float v38; // [rsp+38h] [rbp-80h]
float v39; // [rsp+3Ch] [rbp-7Ch]
float v40; // [rsp+40h] [rbp-78h]
float v41; // [rsp+44h] [rbp-74h]
float v42; // [rsp+48h] [rbp-70h]
float v43; // [rsp+4Ch] [rbp-6Ch]
float v44; // [rsp+50h] [rbp-68h]
float v45; // [rsp+54h] [rbp-64h]
float v46; // [rsp+58h] [rbp-60h]
float v47; // [rsp+5Ch] [rbp-5Ch]
float v48; // [rsp+60h] [rbp-58h]
float v49; // [rsp+64h] [rbp-54h]
float v50; // [rsp+68h] [rbp-50h]
float v51; // [rsp+6Ch] [rbp-4Ch]
float v52; // [rsp+70h] [rbp-48h]
float v53; // [rsp+74h] [rbp-44h]
float v54; // [rsp+78h] [rbp-40h]
float v55; // [rsp+7Ch] [rbp-3Ch]
float v56; // [rsp+80h] [rbp-38h]
float v57; // [rsp+84h] [rbp-34h]
float v58; // [rsp+88h] [rbp-30h]
float v59; // [rsp+8Ch] [rbp-2Ch]
float v60; // [rsp+90h] [rbp-28h]
float v61; // [rsp+94h] [rbp-24h]
float v62; // [rsp+98h] [rbp-20h]
float v63; // [rsp+9Ch] [rbp-1Ch]
float v64; // [rsp+A0h] [rbp-18h]
float v65; // [rsp+A4h] [rbp-14h]
float v66; // [rsp+A8h] [rbp-10h]
float v67; // [rsp+ACh] [rbp-Ch]
float v68; // [rsp+B0h] [rbp-8h]
float v69; // [rsp+B4h] [rbp-4h]

v2 = a1[16] + *a1;
v6 = a1[17] + a1[1];
v10 = *a1 - a1[16];
v14 = a1[1] - a1[17];
v18 = a1[24] + a1[8];
v23 = a1[25] + a1[9];
v28 = a1[8] - a1[24];
v33 = a1[9] - a1[25];
v38 = v2 + v18;
v39 = v6 + v23;
v40 = v2 - v18;
v41 = v6 - v23;
v42 = v10 - v33;
v43 = v14 + v28;
v44 = v10 + v33;
v45 = v14 - v28;
v3 = a1[18] + a1[2];
v7 = a1[19] + a1[3];
v11 = a1[2] - a1[18];
v15 = a1[3] - a1[19];
v19 = a1[26] + a1[10];
v24 = a1[27] + a1[11];
v29 = a1[10] - a1[26];
v34 = a1[11] - a1[27];
v46 = v3 + v19;
v47 = v7 + v24;
v48 = v3 - v19;
v49 = v7 - v24;
v50 = (float)(0.9238795 * (float)(v11 - v34)) - (float)(0.38268343 * (float)(v15 + v29));
v51 = (float)(0.38268343 * (float)(v11 - v34)) + (float)(0.9238795 * (float)(v15 + v29));
v52 = (float)(0.38268343 * (float)(v11 + v34)) - (float)(0.9238795 * (float)(v15 - v29));
v53 = (float)(0.9238795 * (float)(v11 + v34)) + (float)(0.38268343 * (float)(v15 - v29));
v4 = a1[20] + a1[4];
v8 = a1[21] + a1[5];
v12 = a1[4] - a1[20];
v16 = a1[5] - a1[21];
v20 = a1[28] + a1[12];
v25 = a1[29] + a1[13];
v30 = a1[12] - a1[28];
v35 = a1[13] - a1[29];
v54 = v4 + v20;
v55 = v8 + v25;
v56 = v4 - v20;
v57 = v8 - v25;
v58 = (float)((float)(v12 - v35) - (float)(v16 + v30)) * 0.70710677;
v59 = (float)((float)(v16 + v30) + (float)(v12 - v35)) * 0.70710677;
v60 = (float)((float)(v12 + v35) + (float)(v16 - v30)) * 0.70710677;
v61 = (float)((float)(v16 - v30) - (float)(v12 + v35)) * 0.70710677;
v5 = a1[22] + a1[6];
v9 = a1[23] + a1[7];
v13 = a1[6] - a1[22];
v17 = a1[7] - a1[23];
v21 = a1[30] + a1[14];
v26 = a1[31] + a1[15];
v31 = a1[14] - a1[30];
v36 = a1[15] - a1[31];
v62 = v5 + v21;
v63 = v9 + v26;
v64 = v5 - v21;
v65 = v9 - v26;
v66 = (float)(0.38268343 * (float)(v13 - v36)) - (float)(0.9238795 * (float)(v17 + v31));
v67 = (float)(0.9238795 * (float)(v13 - v36)) + (float)(0.38268343 * (float)(v17 + v31));
v68 = (float)(0.9238795 * (float)(v13 + v36)) - (float)(0.38268343 * (float)(v17 - v31));
v69 = (float)(0.38268343 * (float)(v13 + v36)) + (float)(0.9238795 * (float)(v17 - v31));
a1[24] = (float)(v44 - v60) + (float)(v52 - v68);
a1[25] = (float)(v45 - v61) + (float)(v53 - v69);
a1[26] = (float)(v44 - v60) - (float)(v52 - v68);
a1[27] = (float)(v45 - v61) - (float)(v53 - v69);
a1[28] = (float)(v44 + v60) - (float)(v53 + v69);
a1[29] = (float)(v45 + v61) + (float)(v52 + v68);
a1[30] = (float)(v44 + v60) + (float)(v53 + v69);
a1[31] = (float)(v45 + v61) - (float)(v52 + v68);
a1[16] = (float)(v42 + v58) + (float)(v50 + v66);
a1[17] = (float)(v43 + v59) + (float)(v51 + v67);
a1[18] = (float)(v42 + v58) - (float)(v50 + v66);
a1[19] = (float)(v43 + v59) - (float)(v51 + v67);
a1[20] = (float)(v42 - v58) - (float)(v51 - v67);
a1[21] = (float)(v43 - v59) + (float)(v50 - v66);
a1[22] = (float)(v42 - v58) + (float)(v51 - v67);
a1[23] = (float)(v43 - v59) - (float)(v50 - v66);
v22 = (float)((float)(v48 - (float)(v9 - v26)) - (float)(v49 + (float)(v5 - v21))) * 0.70710677;
v27 = (float)((float)(v49 + v64) + (float)(v48 - (float)(v9 - v26))) * 0.70710677;
v32 = (float)((float)(v48 + v65) - (float)(v49 - v64)) * 0.70710677;
v37 = (float)((float)(v49 - v64) + (float)(v48 + v65)) * 0.70710677;
a1[8] = (float)(v40 - v57) + v22;
a1[9] = (float)(v41 + v56) + v27;
a1[10] = (float)(v40 - v57) - v22;
a1[11] = (float)(v41 + v56) - v27;
a1[12] = (float)(v40 + v57) - v37;
a1[13] = (float)(v41 - v56) + v32;
a1[14] = (float)(v40 + v57) + v37;
a1[15] = (float)(v41 - v56) - v32;
*a1 = (float)(v38 + v54) + (float)(v46 + v62);
a1[1] = (float)(v39 + v55) + (float)(v47 + v63);
a1[2] = (float)(v38 + v54) - (float)(v46 + v62);
a1[3] = (float)(v39 + v55) - (float)(v47 + v63);
a1[4] = (float)(v38 - v54) - (float)(v47 - v63);
a1[5] = (float)(v39 - v55) + (float)(v46 - v62);
a1[6] = (float)(v38 - v54) + (float)(v47 - v63);
result = a1 + 7;
a1[7] = (float)(v39 - v55) - (float)(v46 - v62);
return result;
}