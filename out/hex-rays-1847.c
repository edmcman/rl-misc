






# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-168h]
double v4; // [rsp+20h] [rbp-160h]
double v5; // [rsp+28h] [rbp-158h]
double v6; // [rsp+30h] [rbp-150h]
double v7; // [rsp+38h] [rbp-148h]
double v8; // [rsp+40h] [rbp-140h]
double v9; // [rsp+48h] [rbp-138h]
double v10; // [rsp+50h] [rbp-130h]
double v11; // [rsp+50h] [rbp-130h]
double v12; // [rsp+50h] [rbp-130h]
double v13; // [rsp+50h] [rbp-130h]
double v14; // [rsp+50h] [rbp-130h]
double v15; // [rsp+50h] [rbp-130h]
double v16; // [rsp+50h] [rbp-130h]
double v17; // [rsp+50h] [rbp-130h]
double v18; // [rsp+58h] [rbp-128h]
double v19; // [rsp+58h] [rbp-128h]
double v20; // [rsp+58h] [rbp-128h]
double v21; // [rsp+58h] [rbp-128h]
double v22; // [rsp+58h] [rbp-128h]
double v23; // [rsp+58h] [rbp-128h]
double v24; // [rsp+58h] [rbp-128h]
double v25; // [rsp+58h] [rbp-128h]
double v26; // [rsp+60h] [rbp-120h]
double v27; // [rsp+60h] [rbp-120h]
double v28; // [rsp+60h] [rbp-120h]
double v29; // [rsp+60h] [rbp-120h]
double v30; // [rsp+60h] [rbp-120h]
double v31; // [rsp+60h] [rbp-120h]
double v32; // [rsp+60h] [rbp-120h]
double v33; // [rsp+60h] [rbp-120h]
double v34; // [rsp+60h] [rbp-120h]
double v35; // [rsp+60h] [rbp-120h]
double v36; // [rsp+60h] [rbp-120h]
double v37; // [rsp+60h] [rbp-120h]
double v38; // [rsp+60h] [rbp-120h]
double v39; // [rsp+60h] [rbp-120h]
double v40; // [rsp+68h] [rbp-118h]
double v41; // [rsp+68h] [rbp-118h]
double v42; // [rsp+68h] [rbp-118h]
double v43; // [rsp+68h] [rbp-118h]
double v44; // [rsp+68h] [rbp-118h]
double v45; // [rsp+68h] [rbp-118h]
double v46; // [rsp+68h] [rbp-118h]
double v47; // [rsp+68h] [rbp-118h]
double v48; // [rsp+68h] [rbp-118h]
double v49; // [rsp+68h] [rbp-118h]
double v50; // [rsp+68h] [rbp-118h]
double v51; // [rsp+68h] [rbp-118h]
double v52; // [rsp+68h] [rbp-118h]
double v53; // [rsp+68h] [rbp-118h]
double v54; // [rsp+70h] [rbp-110h]
double v55; // [rsp+70h] [rbp-110h]
double v56; // [rsp+70h] [rbp-110h]
double v57; // [rsp+70h] [rbp-110h]
double v58; // [rsp+70h] [rbp-110h]
double v59; // [rsp+70h] [rbp-110h]
double v60; // [rsp+70h] [rbp-110h]
double v61; // [rsp+70h] [rbp-110h]
double v62; // [rsp+70h] [rbp-110h]
double v63; // [rsp+70h] [rbp-110h]
double v64; // [rsp+70h] [rbp-110h]
double v65; // [rsp+70h] [rbp-110h]
double v66; // [rsp+78h] [rbp-108h]
double v67; // [rsp+78h] [rbp-108h]
double v68; // [rsp+78h] [rbp-108h]
double v69; // [rsp+78h] [rbp-108h]
double v70; // [rsp+78h] [rbp-108h]
double v71; // [rsp+78h] [rbp-108h]
double v72; // [rsp+78h] [rbp-108h]
double v73; // [rsp+78h] [rbp-108h]
double v74; // [rsp+78h] [rbp-108h]
double v75; // [rsp+78h] [rbp-108h]
double v76; // [rsp+78h] [rbp-108h]
double v77; // [rsp+78h] [rbp-108h]
double v78; // [rsp+80h] [rbp-100h]
double v79; // [rsp+88h] [rbp-F8h]
double v80; // [rsp+90h] [rbp-F0h]
double v81; // [rsp+98h] [rbp-E8h]
double v82; // [rsp+A0h] [rbp-E0h]
double v83; // [rsp+A8h] [rbp-D8h]
double v84; // [rsp+B0h] [rbp-D0h]
double v85; // [rsp+B8h] [rbp-C8h]
double v86; // [rsp+C0h] [rbp-C0h]
double v87; // [rsp+C8h] [rbp-B8h]
double v88; // [rsp+D0h] [rbp-B0h]
double v89; // [rsp+D8h] [rbp-A8h]
double v90; // [rsp+E0h] [rbp-A0h]
double v91; // [rsp+E8h] [rbp-98h]
double v92; // [rsp+F0h] [rbp-90h]
double v93; // [rsp+F8h] [rbp-88h]
double v94; // [rsp+100h] [rbp-80h]
double v95; // [rsp+108h] [rbp-78h]
double v96; // [rsp+110h] [rbp-70h]
double v97; // [rsp+118h] [rbp-68h]
double v98; // [rsp+120h] [rbp-60h]
double v99; // [rsp+128h] [rbp-58h]
double v100; // [rsp+130h] [rbp-50h]
double v101; // [rsp+138h] [rbp-48h]
double v102; // [rsp+140h] [rbp-40h]
double v103; // [rsp+148h] [rbp-38h]
double v104; // [rsp+150h] [rbp-30h]
double v105; // [rsp+158h] [rbp-28h]
double v106; // [rsp+160h] [rbp-20h]
double v107; // [rsp+168h] [rbp-18h]
double v108; // [rsp+170h] [rbp-10h]
double v109; // [rsp+178h] [rbp-8h]

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
v54 = (v26 - v40) * v3;
v66 = (v40 + v26) * v3;
v78 = v10 + v54;
v79 = v18 + v66;
v80 = v10 - v54;
v81 = v18 - v66;
v11 = a1[17] + *a1;
v19 = a1[1] - a1[16];
v27 = a1[25] + a1[8];
v41 = a1[9] - a1[24];
v55 = (v27 - v41) * v3;
v67 = (v41 + v27) * v3;
v82 = v11 - v67;
v83 = v19 + v55;
v84 = v11 + v67;
v85 = v19 - v55;
v28 = a1[2] - a1[19];
v42 = a1[18] + a1[3];
v12 = v4 * v28 - v5 * v42;
v20 = v5 * v28 + v4 * v42;
v29 = a1[10] - a1[27];
v43 = a1[26] + a1[11];
v56 = v7 * v29 - v6 * v43;
v68 = v6 * v29 + v7 * v43;
v86 = v12 + v56;
v87 = v20 + v68;
v88 = v12 - v56;
v89 = v20 - v68;
v30 = a1[19] + a1[2];
v44 = a1[3] - a1[18];
v13 = v6 * v30 - v7 * v44;
v21 = v7 * v30 + v6 * v44;
v31 = a1[27] + a1[10];
v45 = a1[11] - a1[26];
v57 = v5 * v45 + v4 * v31;
v69 = v4 * v45 - v5 * v31;
v90 = v13 - v57;
v91 = v21 - v69;
v92 = v13 + v57;
v93 = v21 + v69;
v32 = a1[4] - a1[21];
v46 = a1[20] + a1[5];
v14 = v8 * v32 - v9 * v46;
v22 = v9 * v32 + v8 * v46;
v33 = a1[12] - a1[29];
v47 = a1[28] + a1[13];
v58 = v9 * v33 - v8 * v47;
v70 = v8 * v33 + v9 * v47;
v94 = v14 + v58;
v95 = v22 + v70;
v96 = v14 - v58;
v97 = v22 - v70;
v34 = a1[21] + a1[4];
v48 = a1[5] - a1[20];
v15 = v9 * v34 - v8 * v48;
v23 = v8 * v34 + v9 * v48;
v35 = a1[29] + a1[12];
v49 = a1[13] - a1[28];
v59 = v8 * v35 - v9 * v49;
v71 = v9 * v35 + v8 * v49;
v98 = v15 - v59;
v99 = v23 - v71;
v100 = v15 + v59;
v101 = v23 + v71;
v36 = a1[6] - a1[23];
v50 = a1[22] + a1[7];
v16 = v6 * v36 - v7 * v50;
v24 = v7 * v36 + v6 * v50;
v37 = a1[14] - a1[31];
v51 = a1[30] + a1[15];
v60 = v5 * v37 - v4 * v51;
v72 = v4 * v37 + v5 * v51;
v102 = v16 + v60;
v103 = v24 + v72;
v104 = v16 - v60;
v105 = v24 - v72;
v38 = a1[23] + a1[6];
v52 = a1[7] - a1[22];
v17 = v4 * v52 + v5 * v38;
v25 = v5 * v52 - v4 * v38;
v39 = a1[31] + a1[14];
v53 = a1[15] - a1[30];
v61 = v7 * v39 - v6 * v53;
v73 = v6 * v39 + v7 * v53;
v106 = v17 + v61;
v107 = v25 + v73;
v108 = v17 - v61;
v109 = v25 - v73;
*a1 = v78 + v94 + v86 + v102;
a1[1] = v79 + v95 + v87 + v103;
a1[2] = v78 + v94 - (v86 + v102);
a1[3] = v79 + v95 - (v87 + v103);
a1[4] = v78 - v94 - (v87 - v103);
a1[5] = v79 - v95 + v86 - v102;
a1[6] = v78 - v94 + v87 - v103;
a1[7] = v79 - v95 - (v86 - v102);
v62 = (v88 - v105 - (v89 + v104)) * v3;
v74 = (v89 + v104 + v88 - v105) * v3;
a1[8] = v80 - v97 + v62;
a1[9] = v81 + v96 + v74;
a1[10] = v80 - v97 - v62;
a1[11] = v81 + v96 - v74;
v63 = (v88 + v105 - (v89 - v104)) * v3;
v75 = (v89 - v104 + v88 + v105) * v3;
a1[12] = v80 + v97 - v75;
a1[13] = v81 - v96 + v63;
a1[14] = v80 + v97 + v75;
a1[15] = v81 - v96 - v63;
a1[16] = v82 + v98 + v90 - v106;
a1[17] = v83 + v99 + v91 - v107;
a1[18] = v82 + v98 - (v90 - v106);
a1[19] = v83 + v99 - (v91 - v107);
a1[20] = v82 - v98 - (v91 + v107);
a1[21] = v83 - v99 + v90 + v106;
a1[22] = v82 - v98 + v91 + v107;
a1[23] = v83 - v99 - (v90 + v106);
v64 = (v92 + v109 - (v93 - v108)) * v3;
v76 = (v93 - v108 + v92 + v109) * v3;
a1[24] = v84 - v101 + v64;
a1[25] = v85 + v100 + v76;
a1[26] = v84 - v101 - v64;
a1[27] = v85 + v100 - v76;
v65 = (v92 - v109 - (v93 + v108)) * v3;
v77 = (v93 + v108 + v92 - v109) * v3;
a1[28] = v84 + v101 - v77;
a1[29] = v85 - v100 + v65;
a1[30] = v84 + v101 + v77;
result = a1 + 31;
a1[31] = v85 - v100 - v65;
return result;
}