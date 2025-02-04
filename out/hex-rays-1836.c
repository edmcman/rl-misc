






# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+30h] [rbp-98h]
float v3; // [rsp+30h] [rbp-98h]
float v4; // [rsp+30h] [rbp-98h]
float v5; // [rsp+30h] [rbp-98h]
float v6; // [rsp+30h] [rbp-98h]
float v7; // [rsp+30h] [rbp-98h]
float v8; // [rsp+30h] [rbp-98h]
float v9; // [rsp+30h] [rbp-98h]
float v10; // [rsp+34h] [rbp-94h]
float v11; // [rsp+34h] [rbp-94h]
float v12; // [rsp+34h] [rbp-94h]
float v13; // [rsp+34h] [rbp-94h]
float v14; // [rsp+34h] [rbp-94h]
float v15; // [rsp+34h] [rbp-94h]
float v16; // [rsp+34h] [rbp-94h]
float v17; // [rsp+34h] [rbp-94h]
float v18; // [rsp+38h] [rbp-90h]
float v19; // [rsp+38h] [rbp-90h]
float v20; // [rsp+38h] [rbp-90h]
float v21; // [rsp+38h] [rbp-90h]
float v22; // [rsp+38h] [rbp-90h]
float v23; // [rsp+38h] [rbp-90h]
float v24; // [rsp+38h] [rbp-90h]
float v25; // [rsp+38h] [rbp-90h]
float v26; // [rsp+38h] [rbp-90h]
float v27; // [rsp+38h] [rbp-90h]
float v28; // [rsp+38h] [rbp-90h]
float v29; // [rsp+38h] [rbp-90h]
float v30; // [rsp+38h] [rbp-90h]
float v31; // [rsp+38h] [rbp-90h]
float v32; // [rsp+3Ch] [rbp-8Ch]
float v33; // [rsp+3Ch] [rbp-8Ch]
float v34; // [rsp+3Ch] [rbp-8Ch]
float v35; // [rsp+3Ch] [rbp-8Ch]
float v36; // [rsp+3Ch] [rbp-8Ch]
float v37; // [rsp+3Ch] [rbp-8Ch]
float v38; // [rsp+3Ch] [rbp-8Ch]
float v39; // [rsp+3Ch] [rbp-8Ch]
float v40; // [rsp+3Ch] [rbp-8Ch]
float v41; // [rsp+3Ch] [rbp-8Ch]
float v42; // [rsp+3Ch] [rbp-8Ch]
float v43; // [rsp+3Ch] [rbp-8Ch]
float v44; // [rsp+3Ch] [rbp-8Ch]
float v45; // [rsp+3Ch] [rbp-8Ch]
float v46; // [rsp+40h] [rbp-88h]
float v47; // [rsp+40h] [rbp-88h]
float v48; // [rsp+40h] [rbp-88h]
float v49; // [rsp+40h] [rbp-88h]
float v50; // [rsp+40h] [rbp-88h]
float v51; // [rsp+40h] [rbp-88h]
float v52; // [rsp+40h] [rbp-88h]
float v53; // [rsp+40h] [rbp-88h]
float v54; // [rsp+40h] [rbp-88h]
float v55; // [rsp+40h] [rbp-88h]
float v56; // [rsp+40h] [rbp-88h]
float v57; // [rsp+40h] [rbp-88h]
float v58; // [rsp+44h] [rbp-84h]
float v59; // [rsp+44h] [rbp-84h]
float v60; // [rsp+44h] [rbp-84h]
float v61; // [rsp+44h] [rbp-84h]
float v62; // [rsp+44h] [rbp-84h]
float v63; // [rsp+44h] [rbp-84h]
float v64; // [rsp+44h] [rbp-84h]
float v65; // [rsp+44h] [rbp-84h]
float v66; // [rsp+44h] [rbp-84h]
float v67; // [rsp+44h] [rbp-84h]
float v68; // [rsp+44h] [rbp-84h]
float v69; // [rsp+44h] [rbp-84h]
float v70; // [rsp+48h] [rbp-80h]
float v71; // [rsp+4Ch] [rbp-7Ch]
float v72; // [rsp+50h] [rbp-78h]
float v73; // [rsp+54h] [rbp-74h]
float v74; // [rsp+58h] [rbp-70h]
float v75; // [rsp+5Ch] [rbp-6Ch]
float v76; // [rsp+60h] [rbp-68h]
float v77; // [rsp+64h] [rbp-64h]
float v78; // [rsp+68h] [rbp-60h]
float v79; // [rsp+6Ch] [rbp-5Ch]
float v80; // [rsp+70h] [rbp-58h]
float v81; // [rsp+74h] [rbp-54h]
float v82; // [rsp+78h] [rbp-50h]
float v83; // [rsp+7Ch] [rbp-4Ch]
float v84; // [rsp+80h] [rbp-48h]
float v85; // [rsp+84h] [rbp-44h]
float v86; // [rsp+88h] [rbp-40h]
float v87; // [rsp+8Ch] [rbp-3Ch]
float v88; // [rsp+90h] [rbp-38h]
float v89; // [rsp+94h] [rbp-34h]
float v90; // [rsp+98h] [rbp-30h]
float v91; // [rsp+9Ch] [rbp-2Ch]
float v92; // [rsp+A0h] [rbp-28h]
float v93; // [rsp+A4h] [rbp-24h]
float v94; // [rsp+A8h] [rbp-20h]
float v95; // [rsp+ACh] [rbp-1Ch]
float v96; // [rsp+B0h] [rbp-18h]
float v97; // [rsp+B4h] [rbp-14h]
float v98; // [rsp+B8h] [rbp-10h]
float v99; // [rsp+BCh] [rbp-Ch]
float v100; // [rsp+C0h] [rbp-8h]
float v101; // [rsp+C4h] [rbp-4h]

v2 = *a1 - a1[17];
v10 = a1[16] + a1[1];
v18 = a1[8] - a1[25];
v32 = a1[24] + a1[9];
v46 = (float)(v18 - v32) * 0.70710677;
v58 = (float)(v32 + v18) * 0.70710677;
v70 = v2 + v46;
v71 = v10 + v58;
v72 = v2 - v46;
v73 = v10 - v58;
v3 = a1[17] + *a1;
v11 = a1[1] - a1[16];
v19 = a1[25] + a1[8];
v33 = a1[9] - a1[24];
v47 = (float)(v19 - v33) * 0.70710677;
v59 = (float)(v33 + v19) * 0.70710677;
v74 = v3 - v59;
v75 = v11 + v47;
v76 = v3 + v59;
v77 = v11 - v47;
v20 = a1[2] - a1[19];
v34 = a1[18] + a1[3];
v4 = (float)(0.98078525 * v20) - (float)(0.19509032 * v34);
v12 = (float)(0.19509032 * v20) + (float)(0.98078525 * v34);
v21 = a1[10] - a1[27];
v35 = a1[26] + a1[11];
v48 = (float)(0.55557024 * v21) - (float)(0.8314696 * v35);
v60 = (float)(0.8314696 * v21) + (float)(0.55557024 * v35);
v78 = v4 + v48;
v79 = v12 + v60;
v80 = v4 - v48;
v81 = v12 - v60;
v22 = a1[19] + a1[2];
v36 = a1[3] - a1[18];
v5 = (float)(0.8314696 * v22) - (float)(0.55557024 * v36);
v13 = (float)(0.55557024 * v22) + (float)(0.8314696 * v36);
v23 = a1[27] + a1[10];
v37 = a1[11] - a1[26];
v49 = (float)(0.19509032 * v37) + (float)(0.98078525 * v23);
v61 = (float)(0.98078525 * v37) - (float)(0.19509032 * v23);
v82 = v5 - v49;
v83 = v13 - v61;
v84 = v5 + v49;
v85 = v13 + v61;
v24 = a1[4] - a1[21];
v38 = a1[20] + a1[5];
v6 = (float)(0.9238795 * v24) - (float)(0.38268343 * v38);
v14 = (float)(0.38268343 * v24) + (float)(0.9238795 * v38);
v25 = a1[12] - a1[29];
v39 = a1[28] + a1[13];
v50 = (float)(0.38268343 * v25) - (float)(0.9238795 * v39);
v62 = (float)(0.9238795 * v25) + (float)(0.38268343 * v39);
v86 = v6 + v50;
v87 = v14 + v62;
v88 = v6 - v50;
v89 = v14 - v62;
v26 = a1[21] + a1[4];
v40 = a1[5] - a1[20];
v7 = (float)(0.38268343 * v26) - (float)(0.9238795 * v40);
v15 = (float)(0.9238795 * v26) + (float)(0.38268343 * v40);
v27 = a1[29] + a1[12];
v41 = a1[13] - a1[28];
v51 = (float)(0.9238795 * v27) - (float)(0.38268343 * v41);
v63 = (float)(0.38268343 * v27) + (float)(0.9238795 * v41);
v90 = v7 - v51;
v91 = v15 - v63;
v92 = v7 + v51;
v93 = v15 + v63;
v28 = a1[6] - a1[23];
v42 = a1[22] + a1[7];
v8 = (float)(0.8314696 * v28) - (float)(0.55557024 * v42);
v16 = (float)(0.55557024 * v28) + (float)(0.8314696 * v42);
v29 = a1[14] - a1[31];
v43 = a1[30] + a1[15];
v52 = (float)(0.19509032 * v29) - (float)(0.98078525 * v43);
v64 = (float)(0.98078525 * v29) + (float)(0.19509032 * v43);
v94 = v8 + v52;
v95 = v16 + v64;
v96 = v8 - v52;
v97 = v16 - v64;
v30 = a1[23] + a1[6];
v44 = a1[7] - a1[22];
v9 = (float)(0.98078525 * v44) + (float)(0.19509032 * v30);
v17 = (float)(0.19509032 * v44) - (float)(0.98078525 * v30);
v31 = a1[31] + a1[14];
v45 = a1[15] - a1[30];
v53 = (float)(0.55557024 * v31) - (float)(0.8314696 * v45);
v65 = (float)(0.8314696 * v31) + (float)(0.55557024 * v45);
v98 = v9 + v53;
v99 = v17 + v65;
v100 = v9 - v53;
v101 = v17 - v65;
*a1 = (float)(v70 + v86) + (float)(v78 + v94);
a1[1] = (float)(v71 + v87) + (float)(v79 + v95);
a1[2] = (float)(v70 + v86) - (float)(v78 + v94);
a1[3] = (float)(v71 + v87) - (float)(v79 + v95);
a1[4] = (float)(v70 - v86) - (float)(v79 - v95);
a1[5] = (float)(v71 - v87) + (float)(v78 - v94);
a1[6] = (float)(v70 - v86) + (float)(v79 - v95);
a1[7] = (float)(v71 - v87) - (float)(v78 - v94);
v54 = (float)((float)(v80 - v97) - (float)(v81 + v96)) * 0.70710677;
v66 = (float)((float)(v81 + v96) + (float)(v80 - v97)) * 0.70710677;
a1[8] = (float)(v72 - v89) + v54;
a1[9] = (float)(v73 + v88) + v66;
a1[10] = (float)(v72 - v89) - v54;
a1[11] = (float)(v73 + v88) - v66;
v55 = (float)((float)(v80 + v97) - (float)(v81 - v96)) * 0.70710677;
v67 = (float)((float)(v81 - v96) + (float)(v80 + v97)) * 0.70710677;
a1[12] = (float)(v72 + v89) - v67;
a1[13] = (float)(v73 - v88) + v55;
a1[14] = (float)(v72 + v89) + v67;
a1[15] = (float)(v73 - v88) - v55;
a1[16] = (float)(v74 + v90) + (float)(v82 - v98);
a1[17] = (float)(v75 + v91) + (float)(v83 - v99);
a1[18] = (float)(v74 + v90) - (float)(v82 - v98);
a1[19] = (float)(v75 + v91) - (float)(v83 - v99);
a1[20] = (float)(v74 - v90) - (float)(v83 + v99);
a1[21] = (float)(v75 - v91) + (float)(v82 + v98);
a1[22] = (float)(v74 - v90) + (float)(v83 + v99);
a1[23] = (float)(v75 - v91) - (float)(v82 + v98);
v56 = (float)((float)(v84 + v101) - (float)(v85 - v100)) * 0.70710677;
v68 = (float)((float)(v85 - v100) + (float)(v84 + v101)) * 0.70710677;
a1[24] = (float)(v76 - v93) + v56;
a1[25] = (float)(v77 + v92) + v68;
a1[26] = (float)(v76 - v93) - v56;
a1[27] = (float)(v77 + v92) - v68;
v57 = (float)((float)(v84 - v101) - (float)(v85 + v100)) * 0.70710677;
v69 = (float)((float)(v85 + v100) + (float)(v84 - v101)) * 0.70710677;
a1[28] = (float)(v76 + v93) - v69;
a1[29] = (float)(v77 - v92) + v57;
a1[30] = (float)(v76 + v93) + v69;
result = a1 + 31;
a1[31] = (float)(v77 - v92) - v57;
return result;
}