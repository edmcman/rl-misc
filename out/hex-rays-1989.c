#include <stdio.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int *a1, _DWORD *a2)
{
__int64 result; // rax
int v3; // [rsp+14h] [rbp-ACh]
int v4; // [rsp+14h] [rbp-ACh]
unsigned int v5; // [rsp+14h] [rbp-ACh]
int v6; // [rsp+14h] [rbp-ACh]
unsigned int v7; // [rsp+14h] [rbp-ACh]
int v8; // [rsp+14h] [rbp-ACh]
unsigned int v9; // [rsp+14h] [rbp-ACh]
int v10; // [rsp+14h] [rbp-ACh]
unsigned int v11; // [rsp+14h] [rbp-ACh]
unsigned int v12; // [rsp+14h] [rbp-ACh]
int v13; // [rsp+14h] [rbp-ACh]
unsigned int v14; // [rsp+14h] [rbp-ACh]
int v15; // [rsp+14h] [rbp-ACh]
unsigned int v16; // [rsp+14h] [rbp-ACh]
unsigned int v17; // [rsp+14h] [rbp-ACh]
int v18; // [rsp+18h] [rbp-A8h]
unsigned int v19; // [rsp+18h] [rbp-A8h]
unsigned int v20; // [rsp+18h] [rbp-A8h]
unsigned int v21; // [rsp+18h] [rbp-A8h]
unsigned int v22; // [rsp+18h] [rbp-A8h]
int v23; // [rsp+18h] [rbp-A8h]
unsigned int v24; // [rsp+18h] [rbp-A8h]
unsigned int v25; // [rsp+18h] [rbp-A8h]
unsigned int v26; // [rsp+1Ch] [rbp-A4h]
int v27; // [rsp+1Ch] [rbp-A4h]
unsigned int v28; // [rsp+1Ch] [rbp-A4h]
unsigned int v29; // [rsp+1Ch] [rbp-A4h]
unsigned int v30; // [rsp+1Ch] [rbp-A4h]
unsigned int v31; // [rsp+1Ch] [rbp-A4h]
int v32; // [rsp+1Ch] [rbp-A4h]
unsigned int v33; // [rsp+1Ch] [rbp-A4h]
int v34; // [rsp+20h] [rbp-A0h]
unsigned int v35; // [rsp+20h] [rbp-A0h]
unsigned int v36; // [rsp+20h] [rbp-A0h]
int v37; // [rsp+20h] [rbp-A0h]
unsigned int v38; // [rsp+20h] [rbp-A0h]
unsigned int v39; // [rsp+20h] [rbp-A0h]
unsigned int v40; // [rsp+20h] [rbp-A0h]
int v41; // [rsp+24h] [rbp-9Ch]
unsigned int v42; // [rsp+24h] [rbp-9Ch]
int v43; // [rsp+28h] [rbp-98h]
int v44; // [rsp+28h] [rbp-98h]
unsigned int v45; // [rsp+2Ch] [rbp-94h]
unsigned int v46; // [rsp+2Ch] [rbp-94h]
int v47; // [rsp+30h] [rbp-90h]
int v48; // [rsp+30h] [rbp-90h]
int v49; // [rsp+34h] [rbp-8Ch]
int v50; // [rsp+34h] [rbp-8Ch]
int v51; // [rsp+38h] [rbp-88h]
int v52; // [rsp+38h] [rbp-88h]
unsigned int v53; // [rsp+3Ch] [rbp-84h]
unsigned int v54; // [rsp+3Ch] [rbp-84h]
int v55; // [rsp+40h] [rbp-80h]
int v56; // [rsp+40h] [rbp-80h]
int v57; // [rsp+44h] [rbp-7Ch]
int v58; // [rsp+44h] [rbp-7Ch]
unsigned int v59; // [rsp+48h] [rbp-78h]
unsigned int v60; // [rsp+48h] [rbp-78h]
int v61; // [rsp+4Ch] [rbp-74h]
unsigned int v62; // [rsp+4Ch] [rbp-74h]
unsigned int v63; // [rsp+50h] [rbp-70h]
int v64; // [rsp+54h] [rbp-6Ch]
int v65; // [rsp+54h] [rbp-6Ch]
int v66; // [rsp+54h] [rbp-6Ch]
int v67; // [rsp+54h] [rbp-6Ch]
int v68; // [rsp+54h] [rbp-6Ch]
int v69; // [rsp+54h] [rbp-6Ch]
int v70; // [rsp+58h] [rbp-68h]
int v71; // [rsp+58h] [rbp-68h]
int v72; // [rsp+58h] [rbp-68h]
int v73; // [rsp+58h] [rbp-68h]
int v74; // [rsp+58h] [rbp-68h]
int v75; // [rsp+58h] [rbp-68h]
int v76; // [rsp+5Ch] [rbp-64h]
int v77; // [rsp+5Ch] [rbp-64h]
int v78; // [rsp+5Ch] [rbp-64h]
int v79; // [rsp+5Ch] [rbp-64h]
int v80; // [rsp+5Ch] [rbp-64h]
int v81; // [rsp+5Ch] [rbp-64h]
int v82; // [rsp+60h] [rbp-60h]
unsigned int v83; // [rsp+64h] [rbp-5Ch]
int v84; // [rsp+6Ch] [rbp-54h]
unsigned int v85; // [rsp+6Ch] [rbp-54h]
unsigned int v86; // [rsp+70h] [rbp-50h]
int v87; // [rsp+74h] [rbp-4Ch]
unsigned int v88; // [rsp+78h] [rbp-48h]
int v89; // [rsp+80h] [rbp-40h]
unsigned int v90; // [rsp+84h] [rbp-3Ch]
int v91; // [rsp+8Ch] [rbp-34h]
unsigned int v92; // [rsp+90h] [rbp-30h]
int v93; // [rsp+98h] [rbp-28h]
unsigned int v94; // [rsp+98h] [rbp-28h]
unsigned int v95; // [rsp+9Ch] [rbp-24h]
int v96; // [rsp+A0h] [rbp-20h]
unsigned int v97; // [rsp+A4h] [rbp-1Ch]
int v98; // [rsp+ACh] [rbp-14h]
unsigned int v99; // [rsp+B0h] [rbp-10h]
int v100; // [rsp+B8h] [rbp-8h]
unsigned int v101; // [rsp+B8h] [rbp-8h]
unsigned int v102; // [rsp+BCh] [rbp-4h]

v61 = (unsigned __int16)*a2;
v41 = HIWORD(*a2);
v63 = v41 * v61;
v42 = ((unsigned int)(v41 * v61) >> 15) + v41 * v41;
v63 <<= 17;
v62 = v63 + v61 * v61;
if ( v62 < v63 )
++v42;
*a1 = v62;
v18 = 0;
v64 = (unsigned __int16)a2[1];
v3 = HIWORD(a2[1]);
v70 = (unsigned __int16)*a2;
v76 = HIWORD(*a2);
v43 = v76 * v3;
v83 = v3 * v70 + v64 * v76;
if ( v83 < v3 * v70 )
v43 += 0x10000;
v44 = HIWORD(v83) + v43;
v82 = (v83 << 16) + v70 * v64;
if ( v82 < v83 << 16 )
++v44;
if ( v44 < 0 )
v18 = 1;
v4 = 2 * v44;
if ( v82 < 0 )
++v4;
v26 = 2 * v82 + v42;
if ( v26 < 2 * v82 && !++v4 )
++v18;
v34 = v4;
a1[1] = v26;
v27 = 0;
v45 = a2[1];
v84 = (unsigned __int16)v45;
v45 >>= 16;
v86 = v45 * v84;
v46 = ((v45 * v84) >> 15) + v45 * v45;
v86 <<= 17;
v85 = v86 + v84 * v84;
if ( v85 < v86 )
++v46;
v5 = v46;
v35 = v85 + v34;
if ( v35 < v85 )
v5 = v46 + 1;
v19 = v5 + v18;
if ( v19 < v5 )
v27 = 1;
v65 = (unsigned __int16)a2[2];
v6 = HIWORD(a2[2]);
v71 = (unsigned __int16)*a2;
v77 = HIWORD(*a2);
v47 = v77 * v6;
v88 = v6 * v71 + v65 * v77;
if ( v88 < v6 * v71 )
v47 += 0x10000;
v48 = HIWORD(v88) + v47;
v87 = (v88 << 16) + v71 * v65;
if ( v87 < v88 << 16 )
++v48;
if ( v48 < 0 )
++v27;
v7 = 2 * v48;
if ( v87 < 0 )
++v7;
v36 = 2 * v87 + v35;
if ( v36 < 2 * v87 && !++v7 )
++v27;
v20 = v7 + v19;
if ( v20 < v7 )
++v27;
a1[2] = v36;
v37 = 0;
v66 = (unsigned __int16)a2[3];
v8 = HIWORD(a2[3]);
v72 = (unsigned __int16)*a2;
v78 = HIWORD(*a2);
v49 = v78 * v8;
v90 = v8 * v72 + v66 * v78;
if ( v90 < v8 * v72 )
v49 += 0x10000;
v50 = HIWORD(v90) + v49;
v89 = (v90 << 16) + v72 * v66;
if ( v89 < v90 << 16 )
++v50;
if ( v50 < 0 )
v37 = 1;
v9 = 2 * v50;
if ( v89 < 0 )
++v9;
v21 = 2 * v89 + v20;
if ( v21 < 2 * v89 && !++v9 )
++v37;
v28 = v9 + v27;
if ( v28 < v9 )
++v37;
v67 = (unsigned __int16)a2[2];
v10 = HIWORD(a2[2]);
v73 = (unsigned __int16)a2[1];
v79 = HIWORD(a2[1]);
v51 = v79 * v10;
v92 = v10 * v73 + v67 * v79;
if ( v92 < v10 * v73 )
v51 += 0x10000;
v52 = HIWORD(v92) + v51;
v91 = (v92 << 16) + v73 * v67;
if ( v91 < v92 << 16 )
++v52;
if ( v52 < 0 )
++v37;
v11 = 2 * v52;
if ( v91 < 0 )
++v11;
v22 = 2 * v91 + v21;
if ( v22 < 2 * v91 && !++v11 )
++v37;
v29 = v11 + v28;
if ( v29 < v11 )
++v37;
a1[3] = v22;
v23 = 0;
v53 = a2[2];
v93 = (unsigned __int16)v53;
v53 >>= 16;
v95 = v53 * v93;
v54 = ((v53 * v93) >> 15) + v53 * v53;
v95 <<= 17;
v94 = v95 + v93 * v93;
if ( v94 < v95 )
++v54;
v12 = v54;
v30 = v94 + v29;
if ( v30 < v94 )
v12 = v54 + 1;
v38 = v12 + v37;
if ( v38 < v12 )
v23 = 1;
v68 = (unsigned __int16)a2[3];
v13 = HIWORD(a2[3]);
v74 = (unsigned __int16)a2[1];
v80 = HIWORD(a2[1]);
v55 = v80 * v13;
v97 = v13 * v74 + v68 * v80;
if ( v97 < v13 * v74 )
v55 += 0x10000;
v56 = HIWORD(v97) + v55;
v96 = (v97 << 16) + v74 * v68;
if ( v96 < v97 << 16 )
++v56;
if ( v56 < 0 )
++v23;
v14 = 2 * v56;
if ( v96 < 0 )
++v14;
v31 = 2 * v96 + v30;
if ( v31 < 2 * v96 && !++v14 )
++v23;
v39 = v14 + v38;
if ( v39 < v14 )
++v23;
a1[4] = v31;
v32 = 0;
v69 = (unsigned __int16)a2[3];
v15 = HIWORD(a2[3]);
v75 = (unsigned __int16)a2[2];
v81 = HIWORD(a2[2]);
v57 = v81 * v15;
v99 = v15 * v75 + v69 * v81;
if ( v99 < v15 * v75 )
v57 += 0x10000;
v58 = HIWORD(v99) + v57;
v98 = (v99 << 16) + v75 * v69;
if ( v98 < v99 << 16 )
++v58;
if ( v58 < 0 )
v32 = 1;
v16 = 2 * v58;
if ( v98 < 0 )
++v16;
v40 = 2 * v98 + v39;
if ( v40 < 2 * v98 && !++v16 )
++v32;
v24 = v16 + v23;
if ( v24 < v16 )
++v32;
a1[5] = v40;
v59 = a2[3];
v100 = (unsigned __int16)v59;
v59 >>= 16;
v102 = v59 * v100;
v60 = ((v59 * v100) >> 15) + v59 * v59;
v102 <<= 17;
v101 = v102 + v100 * v100;
if ( v101 < v102 )
++v60;
v17 = v60;
v25 = v101 + v24;
if ( v25 < v101 )
v17 = v60 + 1;
v33 = v17 + v32;
a1[6] = v25;
result = v33;
a1[7] = v33;
return result;
}