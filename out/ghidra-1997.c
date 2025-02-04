#include <openssl/x509.h>

#include <string.h>

#include <stdlib.h>

#include <openssl/ssl.h>

#include <openssl/conf.h>

#include <openssl/x509v3.h>

# 1 
undefined8 func0(byte *param_1,long param_2,byte *param_3,long param_4){undefined8 uVar1;byte *local_30;long local_28;byte *local_20;byte local_a;byte local_9;local_30 = param_3;local_28 = param_2;local_20 = param_1;if (param_2 == param_4) {for (; local_28 != 0; local_28 = local_28 + -1) {local_a = *local_20;local_9 = *local_30;if (local_a == 0) {return 0;}if (local_a != local_9) {if ((0x40 < local_a) && (local_a < 0x5b)) {local_a = local_a + 0x20;}if ((0x40 < local_9) && (local_9 < 0x5b)) {local_9 = local_9 + 0x20;}if (local_a != local_9) {return 0;}}local_20 = local_20 + 1;local_30 = local_30 + 1;}uVar1 = 1;}else {uVar1 = 0;}return uVar1;}