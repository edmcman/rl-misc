
# 1 
#include "defs.h"
__int64  func0(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
unsigned __int128 v3; // rax
unsigned __int64 v4; // kr30_8
bool v5; // cf
unsigned __int64 v6; // kr60_8
unsigned __int64 v7; // kr70_8
unsigned __int64 v8; // krA0_8
unsigned __int128 v9; // krE0_16
__int64 result; // rax
unsigned __int128 v12; // [rsp+20h] [rbp-118h]
_BOOL8 v13; // [rsp+30h] [rbp-108h]
unsigned __int64 v14; // [rsp+30h] [rbp-108h]
__int64 v15; // [rsp+30h] [rbp-108h]
unsigned __int64 v16; // [rsp+30h] [rbp-108h]
unsigned __int128 v17; // [rsp+48h] [rbp-F0h]
unsigned __int128 v18; // [rsp+58h] [rbp-E0h]
unsigned __int128 v19; // [rsp+68h] [rbp-D0h]
unsigned __int128 v20; // [rsp+78h] [rbp-C0h]
unsigned __int128 v21; // [rsp+88h] [rbp-B0h]
unsigned __int128 v22; // [rsp+98h] [rbp-A0h]
unsigned __int128 v23; // [rsp+A8h] [rbp-90h]
unsigned __int128 v24; // [rsp+B8h] [rbp-80h]
unsigned __int128 v25; // [rsp+C8h] [rbp-70h]
unsigned __int128 v26; // [rsp+D8h] [rbp-60h]
unsigned __int128 v27; // [rsp+E8h] [rbp-50h]
unsigned __int128 v28; // [rsp+F8h] [rbp-40h]
unsigned __int128 v29; // [rsp+108h] [rbp-30h]
unsigned __int128 v30; // [rsp+118h] [rbp-20h]

v3 = *a3 * (unsigned __int128)*a2;
v12 = 0 + __PAIR128__(*((unsigned __int64 *)&v3 + 1), 0LL);
v13 = __CFADD__(*((_QWORD *)&v3 + 1), *((_QWORD *)&v12 + 1));
*a1 = 0LL;
v17 = a3[1] * (unsigned __int128)*a2;
*((_QWORD *)&v3 + 1) = v13;
*(_QWORD *)&v3 = 0LL;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v17 + 1), *((unsigned __int64 *)&v12 + 1))) >> 64;
*(_QWORD *)&v3 = __CFADD__(__CFADD__((_QWORD)v17, *((_QWORD *)&v12 + 1)), v13) | (unsigned __int8)__CFADD__(*((_QWORD *)&v17 + 1), *((_QWORD *)&v3 + 1));
v18 = *a3 * (unsigned __int128)a2[1];
v14 = (v3 + __PAIR128__(*((unsigned __int64 *)&v18 + 1), *((unsigned __int64 *)&v12 + 1))) >> 64;
a1[1] = v3 + *((_QWORD *)&v12 + 1);
v19 = *a3 * (unsigned __int128)a2[2];
*((_QWORD *)&v3 + 1) = (__CFADD__(__CFADD__((_QWORD)v18, *((_QWORD *)&v12 + 1)), *((_QWORD *)&v3 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v18 + 1), v14))
+ (_QWORD)v3;
*(_QWORD *)&v12 = *((_QWORD *)&v3 + 1);
*(_QWORD *)&v3 = 0LL;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v19 + 1), v14)) >> 64;
*(_QWORD *)&v3 = __CFADD__(__CFADD__((_QWORD)v19, v14), (_QWORD)v12) | (unsigned __int8)__CFADD__(
*((_QWORD *)&v19 + 1),
*((_QWORD *)&v3 + 1));
v20 = a3[1] * (unsigned __int128)a2[1];
v5 = __CFADD__(__CFADD__((_QWORD)v20, v14), *((_QWORD *)&v3 + 1));
v4 = v3 + v14;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v20 + 1), v14)) >> 64;
v21 = a3[2] * (unsigned __int128)*a2;
*(_QWORD *)&v3 = (v5 | (unsigned __int8)__CFADD__(*((_QWORD *)&v20 + 1), *((_QWORD *)&v3 + 1))) + (_QWORD)v3;
*(_QWORD *)&v12 = (v3 + __PAIR128__(*((unsigned __int64 *)&v21 + 1), v4)) >> 64;
a1[2] = v3 + v4;
v22 = a3[3] * (unsigned __int128)*a2;
*((_QWORD *)&v3 + 1) = (__CFADD__(__CFADD__((_QWORD)v21, v4), *((_QWORD *)&v3 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v21 + 1), (_QWORD)v12))
+ (_QWORD)v3;
*((_QWORD *)&v12 + 1) = *((_QWORD *)&v3 + 1);
*(_QWORD *)&v3 = 0LL;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v22 + 1), v12)) >> 64;
*(_QWORD *)&v3 = __CFADD__(__CFADD__((_QWORD)v22, (_QWORD)v12), *((_QWORD *)&v12 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v22 + 1), *((_QWORD *)&v3 + 1));
v23 = a3[2] * (unsigned __int128)a2[1];
v5 = __CFADD__(__CFADD__((_QWORD)v23, (_QWORD)v12), *((_QWORD *)&v3 + 1));
v6 = v3 + v12;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v23 + 1), v12)) >> 64;
v24 = a3[1] * (unsigned __int128)a2[2];
*(_QWORD *)&v3 = (v5 | (unsigned __int8)__CFADD__(*((_QWORD *)&v23 + 1), *((_QWORD *)&v3 + 1))) + (_QWORD)v3;
v5 = __CFADD__(__CFADD__((_QWORD)v24, v6), *((_QWORD *)&v3 + 1));
v7 = v3 + v6;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v24 + 1), v6)) >> 64;
v25 = *a3 * (unsigned __int128)a2[3];
*(_QWORD *)&v3 = (v5 | (unsigned __int8)__CFADD__(*((_QWORD *)&v24 + 1), *((_QWORD *)&v3 + 1))) + (_QWORD)v3;
*((_QWORD *)&v12 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v25 + 1), v7)) >> 64;
a1[3] = v3 + v7;
v26 = a3[1] * (unsigned __int128)a2[3];
*((_QWORD *)&v3 + 1) = (__CFADD__(__CFADD__((_QWORD)v25, v7), *((_QWORD *)&v3 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v25 + 1), *((_QWORD *)&v12 + 1)))
+ (_QWORD)v3;
v15 = *((_QWORD *)&v3 + 1);
*(_QWORD *)&v3 = 0LL;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v26 + 1), *((unsigned __int64 *)&v12 + 1))) >> 64;
*(_QWORD *)&v3 = __CFADD__(__CFADD__((_QWORD)v26, *((_QWORD *)&v12 + 1)), v15) | (unsigned __int8)__CFADD__(*((_QWORD *)&v26 + 1), *((_QWORD *)&v3 + 1));
v27 = a3[2] * (unsigned __int128)a2[2];
v5 = __CFADD__(__CFADD__((_QWORD)v27, *((_QWORD *)&v12 + 1)), *((_QWORD *)&v3 + 1));
v8 = v3 + *((_QWORD *)&v12 + 1);
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v27 + 1), *((unsigned __int64 *)&v12 + 1))) >> 64;
v28 = a3[3] * (unsigned __int128)a2[1];
*(_QWORD *)&v3 = (v5 | (unsigned __int8)__CFADD__(*((_QWORD *)&v27 + 1), *((_QWORD *)&v3 + 1))) + (_QWORD)v3;
v16 = (v3 + __PAIR128__(*((unsigned __int64 *)&v28 + 1), v8)) >> 64;
a1[4] = v3 + v8;
v29 = a3[3] * (unsigned __int128)a2[2];
*((_QWORD *)&v3 + 1) = (__CFADD__(__CFADD__((_QWORD)v28, v8), *((_QWORD *)&v3 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v28 + 1), v16))
+ (_QWORD)v3;
*(_QWORD *)&v12 = *((_QWORD *)&v3 + 1);
*(_QWORD *)&v3 = 0LL;
*((_QWORD *)&v3 + 1) = (v3 + __PAIR128__(*((unsigned __int64 *)&v29 + 1), v16)) >> 64;
*(_QWORD *)&v3 = __CFADD__(__CFADD__((_QWORD)v29, v16), (_QWORD)v12) | (unsigned __int8)__CFADD__(
*((_QWORD *)&v29 + 1),
*((_QWORD *)&v3 + 1));
v30 = a3[2] * (unsigned __int128)a2[3];
*(_QWORD *)&v12 = (v3 + __PAIR128__(*((unsigned __int64 *)&v30 + 1), v16)) >> 64;
a1[5] = v3 + v16;
*((_QWORD *)&v3 + 1) = (__CFADD__(__CFADD__((_QWORD)v30, v16), *((_QWORD *)&v3 + 1)) | (unsigned __int8)__CFADD__(*((_QWORD *)&v30 + 1), (_QWORD)v12))
+ (_QWORD)v3;
*(_QWORD *)&v3 = 0LL;
v9 = v3 + __PAIR128__((a3[3] * (unsigned __int128)a2[3]) >> 64, v12);
a1[6] = v12;
result = *((_QWORD *)&v9 + 1);
a1[7] = *((_QWORD *)&v9 + 1);
return result;
}