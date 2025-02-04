






# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-158h]
double v4; // [rsp+20h] [rbp-150h]
double v5; // [rsp+28h] [rbp-148h]
double v6; // [rsp+30h] [rbp-140h]
double v7; // [rsp+30h] [rbp-140h]
double v8; // [rsp+30h] [rbp-140h]
double v9; // [rsp+30h] [rbp-140h]
double v10; // [rsp+38h] [rbp-138h]
double v11; // [rsp+38h] [rbp-138h]
double v12; // [rsp+38h] [rbp-138h]
double v13; // [rsp+38h] [rbp-138h]
double v14; // [rsp+40h] [rbp-130h]
double v15; // [rsp+40h] [rbp-130h]
double v16; // [rsp+40h] [rbp-130h]
double v17; // [rsp+40h] [rbp-130h]
double v18; // [rsp+48h] [rbp-128h]
double v19; // [rsp+48h] [rbp-128h]
double v20; // [rsp+48h] [rbp-128h]
double v21; // [rsp+48h] [rbp-128h]
double v22; // [rsp+50h] [rbp-120h]
double v23; // [rsp+50h] [rbp-120h]
double v24; // [rsp+50h] [rbp-120h]
double v25; // [rsp+50h] [rbp-120h]
double v26; // [rsp+50h] [rbp-120h]
double v27; // [rsp+58h] [rbp-118h]
double v28; // [rsp+58h] [rbp-118h]
double v29; // [rsp+58h] [rbp-118h]
double v30; // [rsp+58h] [rbp-118h]
double v31; // [rsp+58h] [rbp-118h]
double v32; // [rsp+60h] [rbp-110h]
double v33; // [rsp+60h] [rbp-110h]
double v34; // [rsp+60h] [rbp-110h]
double v35; // [rsp+60h] [rbp-110h]
double v36; // [rsp+60h] [rbp-110h]
double v37; // [rsp+68h] [rbp-108h]
double v38; // [rsp+68h] [rbp-108h]
double v39; // [rsp+68h] [rbp-108h]
double v40; // [rsp+68h] [rbp-108h]
double v41; // [rsp+68h] [rbp-108h]
double v42; // [rsp+70h] [rbp-100h]
double v43; // [rsp+78h] [rbp-F8h]
double v44; // [rsp+80h] [rbp-F0h]
double v45; // [rsp+88h] [rbp-E8h]
double v46; // [rsp+90h] [rbp-E0h]
double v47; // [rsp+98h] [rbp-D8h]
double v48; // [rsp+A0h] [rbp-D0h]
double v49; // [rsp+A8h] [rbp-C8h]
double v50; // [rsp+B0h] [rbp-C0h]
double v51; // [rsp+B8h] [rbp-B8h]
double v52; // [rsp+C0h] [rbp-B0h]
double v53; // [rsp+C8h] [rbp-A8h]
double v54; // [rsp+D0h] [rbp-A0h]
double v55; // [rsp+D8h] [rbp-98h]
double v56; // [rsp+E0h] [rbp-90h]
double v57; // [rsp+E8h] [rbp-88h]
double v58; // [rsp+F0h] [rbp-80h]
double v59; // [rsp+F8h] [rbp-78h]
double v60; // [rsp+100h] [rbp-70h]
double v61; // [rsp+108h] [rbp-68h]
double v62; // [rsp+110h] [rbp-60h]
double v63; // [rsp+118h] [rbp-58h]
double v64; // [rsp+120h] [rbp-50h]
double v65; // [rsp+128h] [rbp-48h]
double v66; // [rsp+130h] [rbp-40h]
double v67; // [rsp+138h] [rbp-38h]
double v68; // [rsp+140h] [rbp-30h]
double v69; // [rsp+148h] [rbp-28h]
double v70; // [rsp+150h] [rbp-20h]
double v71; // [rsp+158h] [rbp-18h]
double v72; // [rsp+160h] [rbp-10h]
double v73; // [rsp+168h] [rbp-8h]

v3 = a2[1];
v4 = a2[2];
v5 = a2[3];
v6 = a1[16] + *a1;
v10 = a1[17] + a1[1];
v14 = *a1 - a1[16];
v18 = a1[1] - a1[17];
v22 = a1[24] + a1[8];
v27 = a1[25] + a1[9];
v32 = a1[8] - a1[24];
v37 = a1[9] - a1[25];
v42 = v6 + v22;
v43 = v10 + v27;
v44 = v6 - v22;
v45 = v10 - v27;
v46 = v14 - v37;
v47 = v18 + v32;
v48 = v14 + v37;
v49 = v18 - v32;
v7 = a1[18] + a1[2];
v11 = a1[19] + a1[3];
v15 = a1[2] - a1[18];
v19 = a1[3] - a1[19];
v23 = a1[26] + a1[10];
v28 = a1[27] + a1[11];
v33 = a1[10] - a1[26];
v38 = a1[11] - a1[27];
v50 = v7 + v23;
v51 = v11 + v28;
v52 = v7 - v23;
v53 = v11 - v28;
v54 = v4 * (v15 - v38) - v5 * (v19 + v33);
v55 = v5 * (v15 - v38) + v4 * (v19 + v33);
v56 = v5 * (v15 + v38) - v4 * (v19 - v33);
v57 = v4 * (v15 + v38) + v5 * (v19 - v33);
v8 = a1[20] + a1[4];
v12 = a1[21] + a1[5];
v16 = a1[4] - a1[20];
v20 = a1[5] - a1[21];
v24 = a1[28] + a1[12];
v29 = a1[29] + a1[13];
v34 = a1[12] - a1[28];
v39 = a1[13] - a1[29];
v58 = v8 + v24;
v59 = v12 + v29;
v60 = v8 - v24;
v61 = v12 - v29;
v62 = (v16 - v39 - (v20 + v34)) * v3;
v63 = (v20 + v34 + v16 - v39) * v3;
v64 = (v16 + v39 + v20 - v34) * v3;
v65 = (v20 - v34 - (v16 + v39)) * v3;
v9 = a1[22] + a1[6];
v13 = a1[23] + a1[7];
v17 = a1[6] - a1[22];
v21 = a1[7] - a1[23];
v25 = a1[30] + a1[14];
v30 = a1[31] + a1[15];
v35 = a1[14] - a1[30];
v40 = a1[15] - a1[31];
v66 = v9 + v25;
v67 = v13 + v30;
v68 = v9 - v25;
v69 = v13 - v30;
v70 = v5 * (v17 - v40) - v4 * (v21 + v35);
v71 = v4 * (v17 - v40) + v5 * (v21 + v35);
v72 = v4 * (v17 + v40) - v5 * (v21 - v35);
v73 = v5 * (v17 + v40) + v4 * (v21 - v35);
a1[24] = v48 - v64 + v56 - v72;
a1[25] = v49 - v65 + v57 - v73;
a1[26] = v48 - v64 - (v56 - v72);
a1[27] = v49 - v65 - (v57 - v73);
a1[28] = v48 + v64 - (v57 + v73);
a1[29] = v49 + v65 + v56 + v72;
a1[30] = v48 + v64 + v57 + v73;
a1[31] = v49 + v65 - (v56 + v72);
a1[16] = v46 + v62 + v54 + v70;
a1[17] = v47 + v63 + v55 + v71;
a1[18] = v46 + v62 - (v54 + v70);
a1[19] = v47 + v63 - (v55 + v71);
a1[20] = v46 - v62 - (v55 - v71);
a1[21] = v47 - v63 + v54 - v70;
a1[22] = v46 - v62 + v55 - v71;
a1[23] = v47 - v63 - (v54 - v70);
v26 = (v52 - (v13 - v30) - (v53 + v9 - v25)) * v3;
v31 = (v53 + v68 + v52 - (v13 - v30)) * v3;
v36 = (v52 + v69 - (v53 - v68)) * v3;
v41 = (v53 - v68 + v52 + v69) * v3;
a1[8] = v44 - v61 + v26;
a1[9] = v45 + v60 + v31;
a1[10] = v44 - v61 - v26;
a1[11] = v45 + v60 - v31;
a1[12] = v44 + v61 - v41;
a1[13] = v45 - v60 + v36;
a1[14] = v44 + v61 + v41;
a1[15] = v45 - v60 - v36;
*a1 = v42 + v58 + v50 + v66;
a1[1] = v43 + v59 + v51 + v67;
a1[2] = v42 + v58 - (v50 + v66);
a1[3] = v43 + v59 - (v51 + v67);
a1[4] = v42 - v58 - (v51 - v67);
a1[5] = v43 - v59 + v50 - v66;
a1[6] = v42 - v58 + v51 - v67;
result = a1 + 7;
a1[7] = v43 - v59 - (v50 - v66);
return result;
}