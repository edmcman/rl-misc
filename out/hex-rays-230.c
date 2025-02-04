







# 1 
#include "defs.h"
float * func0(float *a1, float *a2)
{
float *result; // rax
float v3; // [rsp+1Ch] [rbp-B4h]
float v4; // [rsp+20h] [rbp-B0h]
float v5; // [rsp+24h] [rbp-ACh]
float v6; // [rsp+28h] [rbp-A8h]
float v7; // [rsp+2Ch] [rbp-A4h]
float v8; // [rsp+30h] [rbp-A0h]
float v9; // [rsp+34h] [rbp-9Ch]
float v10; // [rsp+38h] [rbp-98h]
float v11; // [rsp+38h] [rbp-98h]
float v12; // [rsp+38h] [rbp-98h]
float v13; // [rsp+38h] [rbp-98h]
float v14; // [rsp+38h] [rbp-98h]
float v15; // [rsp+38h] [rbp-98h]
float v16; // [rsp+38h] [rbp-98h]
float v17; // [rsp+38h] [rbp-98h]
float v18; // [rsp+3Ch] [rbp-94h]
float v19; // [rsp+3Ch] [rbp-94h]
float v20; // [rsp+3Ch] [rbp-94h]
float v21; // [rsp+3Ch] [rbp-94h]
float v22; // [rsp+3Ch] [rbp-94h]
float v23; // [rsp+3Ch] [rbp-94h]
float v24; // [rsp+3Ch] [rbp-94h]
float v25; // [rsp+3Ch] [rbp-94h]
float v26; // [rsp+40h] [rbp-90h]
float v27; // [rsp+40h] [rbp-90h]
float v28; // [rsp+40h] [rbp-90h]
float v29; // [rsp+40h] [rbp-90h]
float v30; // [rsp+40h] [rbp-90h]
float v31; // [rsp+40h] [rbp-90h]
float v32; // [rsp+40h] [rbp-90h]
float v33; // [rsp+40h] [rbp-90h]
float v34; // [rsp+40h] [rbp-90h]
float v35; // [rsp+40h] [rbp-90h]
float v36; // [rsp+40h] [rbp-90h]
float v37; // [rsp+40h] [rbp-90h]
float v38; // [rsp+40h] [rbp-90h]
float v39; // [rsp+40h] [rbp-90h]
float v40; // [rsp+44h] [rbp-8Ch]
float v41; // [rsp+44h] [rbp-8Ch]
float v42; // [rsp+44h] [rbp-8Ch]
float v43; // [rsp+44h] [rbp-8Ch]
float v44; // [rsp+44h] [rbp-8Ch]
float v45; // [rsp+44h] [rbp-8Ch]
float v46; // [rsp+44h] [rbp-8Ch]
float v47; // [rsp+44h] [rbp-8Ch]
float v48; // [rsp+44h] [rbp-8Ch]
float v49; // [rsp+44h] [rbp-8Ch]
float v50; // [rsp+44h] [rbp-8Ch]
float v51; // [rsp+44h] [rbp-8Ch]
float v52; // [rsp+44h] [rbp-8Ch]
float v53; // [rsp+44h] [rbp-8Ch]
float v54; // [rsp+48h] [rbp-88h]
float v55; // [rsp+48h] [rbp-88h]
float v56; // [rsp+48h] [rbp-88h]
float v57; // [rsp+48h] [rbp-88h]
float v58; // [rsp+48h] [rbp-88h]
float v59; // [rsp+48h] [rbp-88h]
float v60; // [rsp+48h] [rbp-88h]
float v61; // [rsp+48h] [rbp-88h]
float v62; // [rsp+48h] [rbp-88h]
float v63; // [rsp+48h] [rbp-88h]
float v64; // [rsp+48h] [rbp-88h]
float v65; // [rsp+48h] [rbp-88h]
float v66; // [rsp+4Ch] [rbp-84h]
float v67; // [rsp+4Ch] [rbp-84h]
float v68; // [rsp+4Ch] [rbp-84h]
float v69; // [rsp+4Ch] [rbp-84h]
float v70; // [rsp+4Ch] [rbp-84h]
float v71; // [rsp+4Ch] [rbp-84h]
float v72; // [rsp+4Ch] [rbp-84h]
float v73; // [rsp+4Ch] [rbp-84h]
float v74; // [rsp+4Ch] [rbp-84h]
float v75; // [rsp+4Ch] [rbp-84h]
float v76; // [rsp+4Ch] [rbp-84h]
float v77; // [rsp+4Ch] [rbp-84h]
float v78; // [rsp+50h] [rbp-80h]
float v79; // [rsp+54h] [rbp-7Ch]
float v80; // [rsp+58h] [rbp-78h]
float v81; // [rsp+5Ch] [rbp-74h]
float v82; // [rsp+60h] [rbp-70h]
float v83; // [rsp+64h] [rbp-6Ch]
float v84; // [rsp+68h] [rbp-68h]
float v85; // [rsp+6Ch] [rbp-64h]
float v86; // [rsp+70h] [rbp-60h]
float v87; // [rsp+74h] [rbp-5Ch]
float v88; // [rsp+78h] [rbp-58h]
float v89; // [rsp+7Ch] [rbp-54h]
float v90; // [rsp+80h] [rbp-50h]
float v91; // [rsp+84h] [rbp-4Ch]
float v92; // [rsp+88h] [rbp-48h]
float v93; // [rsp+8Ch] [rbp-44h]
float v94; // [rsp+90h] [rbp-40h]
float v95; // [rsp+94h] [rbp-3Ch]
float v96; // [rsp+98h] [rbp-38h]
float v97; // [rsp+9Ch] [rbp-34h]
float v98; // [rsp+A0h] [rbp-30h]
float v99; // [rsp+A4h] [rbp-2Ch]
float v100; // [rsp+A8h] [rbp-28h]
float v101; // [rsp+ACh] [rbp-24h]
float v102; // [rsp+B0h] [rbp-20h]
float v103; // [rsp+B4h] [rbp-1Ch]
float v104; // [rsp+B8h] [rbp-18h]
float v105; // [rsp+BCh] [rbp-14h]
float v106; // [rsp+C0h] [rbp-10h]
float v107; // [rsp+C4h] [rbp-Ch]
float v108; // [rsp+C8h] [rbp-8h]
float v109; // [rsp+CCh] [rbp-4h]

v3 = a2[1];
v4 = a2[4];
v5 = a2[5];
v6 = a2[6];
v7 = -a2[7];
v8 = a2[8];
v9 = a2[9];
v10 = *a1 - a1[17];
v18 = a1[16] + a1[1];
v26 = a1[8] - a1[25];
v40 = a1[24] + a1[9];
v54 = (float)(v26 - v40) * v3;
v66 = (float)(v40 + v26) * v3;
v78 = v10 + v54;
v79 = v18 + v66;
v80 = v10 - v54;
v81 = v18 - v66;
v11 = a1[17] + *a1;
v19 = a1[1] - a1[16];
v27 = a1[25] + a1[8];
v41 = a1[9] - a1[24];
v55 = (float)(v27 - v41) * v3;
v67 = (float)(v41 + v27) * v3;
v82 = v11 - v67;
v83 = v19 + v55;
v84 = v11 + v67;
v85 = v19 - v55;
v28 = a1[2] - a1[19];
v42 = a1[18] + a1[3];
v12 = (float)(v4 * v28) - (float)(v5 * v42);
v20 = (float)(v5 * v28) + (float)(v4 * v42);
v29 = a1[10] - a1[27];
v43 = a1[26] + a1[11];
v56 = (float)(v7 * v29) - (float)(v6 * v43);
v68 = (float)(v6 * v29) + (float)(v7 * v43);
v86 = v12 + v56;
v87 = v20 + v68;
v88 = v12 - v56;
v89 = v20 - v68;
v30 = a1[19] + a1[2];
v44 = a1[3] - a1[18];
v13 = (float)(v6 * v30) - (float)(v7 * v44);
v21 = (float)(v7 * v30) + (float)(v6 * v44);
v31 = a1[27] + a1[10];
v45 = a1[11] - a1[26];
v57 = (float)(v5 * v45) + (float)(v4 * v31);
v69 = (float)(v4 * v45) - (float)(v5 * v31);
v90 = v13 - v57;
v91 = v21 - v69;
v92 = v13 + v57;
v93 = v21 + v69;
v32 = a1[4] - a1[21];
v46 = a1[20] + a1[5];
v14 = (float)(v8 * v32) - (float)(v9 * v46);
v22 = (float)(v9 * v32) + (float)(v8 * v46);
v33 = a1[12] - a1[29];
v47 = a1[28] + a1[13];
v58 = (float)(v9 * v33) - (float)(v8 * v47);
v70 = (float)(v8 * v33) + (float)(v9 * v47);
v94 = v14 + v58;
v95 = v22 + v70;
v96 = v14 - v58;
v97 = v22 - v70;
v34 = a1[21] + a1[4];
v48 = a1[5] - a1[20];
v15 = (float)(v9 * v34) - (float)(v8 * v48);
v23 = (float)(v8 * v34) + (float)(v9 * v48);
v35 = a1[29] + a1[12];
v49 = a1[13] - a1[28];
v59 = (float)(v8 * v35) - (float)(v9 * v49);
v71 = (float)(v9 * v35) + (float)(v8 * v49);
v98 = v15 - v59;
v99 = v23 - v71;
v100 = v15 + v59;
v101 = v23 + v71;
v36 = a1[6] - a1[23];
v50 = a1[22] + a1[7];
v16 = (float)(v6 * v36) - (float)(v7 * v50);
v24 = (float)(v7 * v36) + (float)(v6 * v50);
v37 = a1[14] - a1[31];
v51 = a1[30] + a1[15];
v60 = (float)(v5 * v37) - (float)(v4 * v51);
v72 = (float)(v4 * v37) + (float)(v5 * v51);
v102 = v16 + v60;
v103 = v24 + v72;
v104 = v16 - v60;
v105 = v24 - v72;
v38 = a1[23] + a1[6];
v52 = a1[7] - a1[22];
v17 = (float)(v4 * v52) + (float)(v5 * v38);
v25 = (float)(v5 * v52) - (float)(v4 * v38);
v39 = a1[31] + a1[14];
v53 = a1[15] - a1[30];
v61 = (float)(v7 * v39) - (float)(v6 * v53);
v73 = (float)(v6 * v39) + (float)(v7 * v53);
v106 = v17 + v61;
v107 = v25 + v73;
v108 = v17 - v61;
v109 = v25 - v73;
*a1 = (float)(v78 + v94) + (float)(v86 + v102);
a1[1] = (float)(v79 + v95) + (float)(v87 + v103);
a1[2] = (float)(v78 + v94) - (float)(v86 + v102);
a1[3] = (float)(v79 + v95) - (float)(v87 + v103);
a1[4] = (float)(v78 - v94) - (float)(v87 - v103);
a1[5] = (float)(v79 - v95) + (float)(v86 - v102);
a1[6] = (float)(v78 - v94) + (float)(v87 - v103);
a1[7] = (float)(v79 - v95) - (float)(v86 - v102);
v62 = (float)((float)(v88 - v105) - (float)(v89 + v104)) * v3;
v74 = (float)((float)(v89 + v104) + (float)(v88 - v105)) * v3;
a1[8] = (float)(v80 - v97) + v62;
a1[9] = (float)(v81 + v96) + v74;
a1[10] = (float)(v80 - v97) - v62;
a1[11] = (float)(v81 + v96) - v74;
v63 = (float)((float)(v88 + v105) - (float)(v89 - v104)) * v3;
v75 = (float)((float)(v89 - v104) + (float)(v88 + v105)) * v3;
a1[12] = (float)(v80 + v97) - v75;
a1[13] = (float)(v81 - v96) + v63;
a1[14] = (float)(v80 + v97) + v75;
a1[15] = (float)(v81 - v96) - v63;
a1[16] = (float)(v82 + v98) + (float)(v90 - v106);
a1[17] = (float)(v83 + v99) + (float)(v91 - v107);
a1[18] = (float)(v82 + v98) - (float)(v90 - v106);
a1[19] = (float)(v83 + v99) - (float)(v91 - v107);
a1[20] = (float)(v82 - v98) - (float)(v91 + v107);
a1[21] = (float)(v83 - v99) + (float)(v90 + v106);
a1[22] = (float)(v82 - v98) + (float)(v91 + v107);
a1[23] = (float)(v83 - v99) - (float)(v90 + v106);
v64 = (float)((float)(v92 + v109) - (float)(v93 - v108)) * v3;
v76 = (float)((float)(v93 - v108) + (float)(v92 + v109)) * v3;
a1[24] = (float)(v84 - v101) + v64;
a1[25] = (float)(v85 + v100) + v76;
a1[26] = (float)(v84 - v101) - v64;
a1[27] = (float)(v85 + v100) - v76;
v65 = (float)((float)(v92 - v109) - (float)(v93 + v108)) * v3;
v77 = (float)((float)(v93 + v108) + (float)(v92 - v109)) * v3;
a1[28] = (float)(v84 + v101) - v77;
a1[29] = (float)(v85 - v100) + v65;
a1[30] = (float)(v84 + v101) + v77;
result = a1 + 31;
a1[31] = (float)(v85 - v100) - v65;
return result;
}