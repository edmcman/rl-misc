#include <stdio.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(_QWORD *a1, _QWORD *a2)
{
__int64 result; // rax
unsigned __int64 v3; // [rsp+18h] [rbp-158h]
__int64 v4; // [rsp+18h] [rbp-158h]
unsigned __int64 v5; // [rsp+18h] [rbp-158h]
unsigned __int64 v6; // [rsp+18h] [rbp-158h]
__int64 v7; // [rsp+18h] [rbp-158h]
unsigned __int64 v8; // [rsp+18h] [rbp-158h]
__int64 v9; // [rsp+18h] [rbp-158h]
unsigned __int64 v10; // [rsp+18h] [rbp-158h]
__int64 v11; // [rsp+18h] [rbp-158h]
unsigned __int64 v12; // [rsp+18h] [rbp-158h]
unsigned __int64 v13; // [rsp+18h] [rbp-158h]
__int64 v14; // [rsp+18h] [rbp-158h]
unsigned __int64 v15; // [rsp+18h] [rbp-158h]
__int64 v16; // [rsp+18h] [rbp-158h]
unsigned __int64 v17; // [rsp+18h] [rbp-158h]
int v18; // [rsp+18h] [rbp-158h]
int v19; // [rsp+20h] [rbp-150h]
unsigned __int64 v20; // [rsp+20h] [rbp-150h]
unsigned __int64 v21; // [rsp+20h] [rbp-150h]
unsigned __int64 v22; // [rsp+20h] [rbp-150h]
unsigned __int64 v23; // [rsp+20h] [rbp-150h]
int v24; // [rsp+20h] [rbp-150h]
unsigned __int64 v25; // [rsp+20h] [rbp-150h]
unsigned __int64 v26; // [rsp+20h] [rbp-150h]
int v27; // [rsp+28h] [rbp-148h]
unsigned __int64 v28; // [rsp+28h] [rbp-148h]
int v29; // [rsp+28h] [rbp-148h]
unsigned __int64 v30; // [rsp+28h] [rbp-148h]
unsigned __int64 v31; // [rsp+28h] [rbp-148h]
unsigned __int64 v32; // [rsp+28h] [rbp-148h]
unsigned __int64 v33; // [rsp+28h] [rbp-148h]
int v34; // [rsp+28h] [rbp-148h]
int v35; // [rsp+30h] [rbp-140h]
unsigned __int64 v36; // [rsp+30h] [rbp-140h]
unsigned __int64 v37; // [rsp+30h] [rbp-140h]
unsigned __int64 v38; // [rsp+30h] [rbp-140h]
int v39; // [rsp+30h] [rbp-140h]
unsigned __int64 v40; // [rsp+30h] [rbp-140h]
unsigned __int64 v41; // [rsp+30h] [rbp-140h]
unsigned __int64 v42; // [rsp+30h] [rbp-140h]
__int64 v43; // [rsp+38h] [rbp-138h]
unsigned __int64 v44; // [rsp+38h] [rbp-138h]
int v45; // [rsp+40h] [rbp-130h]
int v46; // [rsp+40h] [rbp-130h]
__int64 v47; // [rsp+48h] [rbp-128h]
__int64 v48; // [rsp+48h] [rbp-128h]
__int64 v49; // [rsp+48h] [rbp-128h]
int v50; // [rsp+50h] [rbp-120h]
int v51; // [rsp+50h] [rbp-120h]
int v52; // [rsp+58h] [rbp-118h]
int v53; // [rsp+58h] [rbp-118h]
int v54; // [rsp+60h] [rbp-110h]
int v55; // [rsp+60h] [rbp-110h]
__int64 v56; // [rsp+68h] [rbp-108h]
__int64 v57; // [rsp+68h] [rbp-108h]
__int64 v58; // [rsp+68h] [rbp-108h]
int v59; // [rsp+70h] [rbp-100h]
int v60; // [rsp+70h] [rbp-100h]
int v61; // [rsp+78h] [rbp-F8h]
int v62; // [rsp+78h] [rbp-F8h]
__int64 v63; // [rsp+80h] [rbp-F0h]
__int64 v64; // [rsp+80h] [rbp-F0h]
int v65; // [rsp+80h] [rbp-F0h]
__int64 v66; // [rsp+88h] [rbp-E8h]
unsigned __int64 v67; // [rsp+88h] [rbp-E8h]
__int64 v68; // [rsp+90h] [rbp-E0h]
unsigned __int64 v69; // [rsp+90h] [rbp-E0h]
int v70; // [rsp+98h] [rbp-D8h]
unsigned __int64 v71; // [rsp+98h] [rbp-D8h]
int v72; // [rsp+98h] [rbp-D8h]
unsigned __int64 v73; // [rsp+98h] [rbp-D8h]
int v74; // [rsp+98h] [rbp-D8h]
unsigned __int64 v75; // [rsp+98h] [rbp-D8h]
int v76; // [rsp+98h] [rbp-D8h]
unsigned __int64 v77; // [rsp+98h] [rbp-D8h]
int v78; // [rsp+98h] [rbp-D8h]
unsigned __int64 v79; // [rsp+98h] [rbp-D8h]
int v80; // [rsp+98h] [rbp-D8h]
unsigned __int64 v81; // [rsp+98h] [rbp-D8h]
__int64 v82; // [rsp+A0h] [rbp-D0h]
__int64 v83; // [rsp+A0h] [rbp-D0h]
__int64 v84; // [rsp+A0h] [rbp-D0h]
__int64 v85; // [rsp+A0h] [rbp-D0h]
__int64 v86; // [rsp+A0h] [rbp-D0h]
__int64 v87; // [rsp+A0h] [rbp-D0h]
unsigned int v88; // [rsp+A8h] [rbp-C8h]
unsigned int v89; // [rsp+A8h] [rbp-C8h]
unsigned int v90; // [rsp+A8h] [rbp-C8h]
unsigned int v91; // [rsp+A8h] [rbp-C8h]
unsigned int v92; // [rsp+A8h] [rbp-C8h]
unsigned int v93; // [rsp+A8h] [rbp-C8h]
unsigned __int64 v94; // [rsp+B0h] [rbp-C0h]
unsigned int v95; // [rsp+B8h] [rbp-B8h]
__int64 v96; // [rsp+C8h] [rbp-A8h]
unsigned __int64 v97; // [rsp+C8h] [rbp-A8h]
__int64 v98; // [rsp+D0h] [rbp-A0h]
unsigned __int64 v99; // [rsp+D0h] [rbp-A0h]
unsigned __int64 v100; // [rsp+D8h] [rbp-98h]
unsigned int v101; // [rsp+E0h] [rbp-90h]
unsigned __int64 v102; // [rsp+F0h] [rbp-80h]
unsigned int v103; // [rsp+F8h] [rbp-78h]
unsigned __int64 v104; // [rsp+108h] [rbp-68h]
unsigned int v105; // [rsp+110h] [rbp-60h]
__int64 v106; // [rsp+120h] [rbp-50h]
unsigned __int64 v107; // [rsp+120h] [rbp-50h]
__int64 v108; // [rsp+128h] [rbp-48h]
unsigned __int64 v109; // [rsp+128h] [rbp-48h]
unsigned __int64 v110; // [rsp+130h] [rbp-40h]
unsigned int v111; // [rsp+138h] [rbp-38h]
unsigned __int64 v112; // [rsp+148h] [rbp-28h]
unsigned int v113; // [rsp+150h] [rbp-20h]
__int64 v114; // [rsp+160h] [rbp-10h]
unsigned __int64 v115; // [rsp+160h] [rbp-10h]
__int64 v116; // [rsp+168h] [rbp-8h]
unsigned __int64 v117; // [rsp+168h] [rbp-8h]

v35 = 0;
v66 = (unsigned __int16)*a2;
v43 = WORD1(*a2);
v68 = v43 * v66;
v44 = ((unsigned int)(v43 * v66) >> 15) + v43 * v43;
v69 = (v68 << 17) & 0x1FFFE0000LL;
v67 = (unsigned int)(v66 * v66 + v69);
if ( v67 < v69 )
++v44;
v3 = v44;
if ( (unsigned int)v67 < v67 )
v3 = v44 + 1;
v27 = v3;
if ( (unsigned int)v3 < v3 )
v35 = 1;
*a1 = (unsigned int)v67;
v19 = 0;
v70 = (unsigned __int16)a2[1];
v4 = WORD1(a2[1]);
v82 = (unsigned __int16)*a2;
v88 = WORD1(*a2);
v45 = v88 * v4;
v95 = v70 * v88 + v4 * v82;
if ( v95 < (unsigned __int64)(v4 * v82) )
v45 += 0x10000;
v46 = HIWORD(v95) + v45;
v94 = (_DWORD)v82 * v70 + (v95 << 16);
if ( v94 < v95 << 16 )
++v46;
if ( v46 < 0 )
v19 = 1;
v5 = (unsigned int)(2 * v46);
if ( (v94 & 0x80000000) != 0LL )
++v5;
v71 = (unsigned int)(2 * v94);
v28 = (unsigned int)(v27 + v71);
if ( v28 < v71 && !(_DWORD)++v5 )
++v19;
v36 = (unsigned int)(v35 + v5);
if ( v36 < v5 )
++v19;
a1[1] = v28;
v29 = 0;
v47 = a2[1];
v96 = (unsigned __int16)v47;
v48 = WORD1(v47);
v98 = v48 * v96;
v49 = ((unsigned int)(v48 * v96) >> 15) + v48 * v48;
v99 = (v98 << 17) & 0x1FFFE0000LL;
v97 = (unsigned int)(v96 * v96 + v99);
if ( v97 < v99 )
++v49;
v6 = v49;
v37 = (unsigned int)(v36 + v97);
if ( v37 < v97 )
v6 = v49 + 1;
v20 = (unsigned int)(v19 + v6);
if ( v20 < v6 )
v29 = 1;
v72 = (unsigned __int16)a2[2];
v7 = WORD1(a2[2]);
v83 = (unsigned __int16)*a2;
v89 = WORD1(*a2);
v50 = v89 * v7;
v101 = v72 * v89 + v7 * v83;
if ( v101 < (unsigned __int64)(v7 * v83) )
v50 += 0x10000;
v51 = HIWORD(v101) + v50;
v100 = (_DWORD)v83 * v72 + (v101 << 16);
if ( v100 < v101 << 16 )
++v51;
if ( v51 < 0 )
++v29;
v8 = (unsigned int)(2 * v51);
if ( (v100 & 0x80000000) != 0LL )
++v8;
v73 = (unsigned int)(2 * v100);
v38 = (unsigned int)(v37 + v73);
if ( v38 < v73 && !(_DWORD)++v8 )
++v29;
v21 = (unsigned int)(v20 + v8);
if ( v21 < v8 )
++v29;
a1[2] = v38;
v39 = 0;
v74 = (unsigned __int16)a2[3];
v9 = WORD1(a2[3]);
v84 = (unsigned __int16)*a2;
v90 = WORD1(*a2);
v52 = v90 * v9;
v103 = v74 * v90 + v9 * v84;
if ( v103 < (unsigned __int64)(v9 * v84) )
v52 += 0x10000;
v53 = HIWORD(v103) + v52;
v102 = (_DWORD)v84 * v74 + (v103 << 16);
if ( v102 < v103 << 16 )
++v53;
if ( v53 < 0 )
v39 = 1;
v10 = (unsigned int)(2 * v53);
if ( (v102 & 0x80000000) != 0LL )
++v10;
v75 = (unsigned int)(2 * v102);
v22 = (unsigned int)(v21 + v75);
if ( v22 < v75 && !(_DWORD)++v10 )
++v39;
v30 = (unsigned int)(v29 + v10);
if ( v30 < v10 )
++v39;
v76 = (unsigned __int16)a2[2];
v11 = WORD1(a2[2]);
v85 = (unsigned __int16)a2[1];
v91 = WORD1(a2[1]);
v54 = v91 * v11;
v105 = v76 * v91 + v11 * v85;
if ( v105 < (unsigned __int64)(v11 * v85) )
v54 += 0x10000;
v55 = HIWORD(v105) + v54;
v104 = (_DWORD)v85 * v76 + (v105 << 16);
if ( v104 < v105 << 16 )
++v55;
if ( v55 < 0 )
++v39;
v12 = (unsigned int)(2 * v55);
if ( (v104 & 0x80000000) != 0LL )
++v12;
v77 = (unsigned int)(2 * v104);
v23 = (unsigned int)(v22 + v77);
if ( v23 < v77 && !(_DWORD)++v12 )
++v39;
v31 = (unsigned int)(v30 + v12);
if ( v31 < v12 )
++v39;
a1[3] = v23;
v24 = 0;
v56 = a2[2];
v106 = (unsigned __int16)v56;
v57 = WORD1(v56);
v108 = v57 * v106;
v58 = ((unsigned int)(v57 * v106) >> 15) + v57 * v57;
v109 = (v108 << 17) & 0x1FFFE0000LL;
v107 = (unsigned int)(v106 * v106 + v109);
if ( v107 < v109 )
++v58;
v13 = v58;
v32 = (unsigned int)(v31 + v107);
if ( v32 < v107 )
v13 = v58 + 1;
v40 = (unsigned int)(v39 + v13);
if ( v40 < v13 )
v24 = 1;
v78 = (unsigned __int16)a2[3];
v14 = WORD1(a2[3]);
v86 = (unsigned __int16)a2[1];
v92 = WORD1(a2[1]);
v59 = v92 * v14;
v111 = v78 * v92 + v14 * v86;
if ( v111 < (unsigned __int64)(v14 * v86) )
v59 += 0x10000;
v60 = HIWORD(v111) + v59;
v110 = (_DWORD)v86 * v78 + (v111 << 16);
if ( v110 < v111 << 16 )
++v60;
if ( v60 < 0 )
++v24;
v15 = (unsigned int)(2 * v60);
if ( (v110 & 0x80000000) != 0LL )
++v15;
v79 = (unsigned int)(2 * v110);
v33 = (unsigned int)(v32 + v79);
if ( v33 < v79 && !(_DWORD)++v15 )
++v24;
v41 = (unsigned int)(v40 + v15);
if ( v41 < v15 )
++v24;
a1[4] = v33;
v34 = 0;
v80 = (unsigned __int16)a2[3];
v16 = WORD1(a2[3]);
v87 = (unsigned __int16)a2[2];
v93 = WORD1(a2[2]);
v61 = v93 * v16;
v113 = v80 * v93 + v16 * v87;
if ( v113 < (unsigned __int64)(v16 * v87) )
v61 += 0x10000;
v62 = HIWORD(v113) + v61;
v112 = (_DWORD)v87 * v80 + (v113 << 16);
if ( v112 < v113 << 16 )
++v62;
if ( v62 < 0 )
v34 = 1;
v17 = (unsigned int)(2 * v62);
if ( (v112 & 0x80000000) != 0LL )
++v17;
v81 = (unsigned int)(2 * v112);
v42 = (unsigned int)(v41 + v81);
if ( v42 < v81 && !(_DWORD)++v17 )
++v34;
v25 = (unsigned int)(v24 + v17);
if ( v25 < v17 )
++v34;
a1[5] = v42;
v63 = a2[3];
v114 = (unsigned __int16)v63;
v64 = WORD1(v63);
v116 = v64 * v114;
v65 = ((unsigned int)(v64 * v114) >> 15) + v64 * v64;
v117 = (v116 << 17) & 0x1FFFE0000LL;
v115 = (unsigned int)(v114 * v114 + v117);
if ( v115 < v117 )
++v65;
v18 = v65;
v26 = (unsigned int)(v25 + v115);
if ( v26 < v115 )
v18 = v65 + 1;
a1[6] = v26;
result = (unsigned int)(v34 + v18);
a1[7] = result;
return result;
}