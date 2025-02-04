#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
undefined8 func0(byte *param_1,uint *param_2){byte bVar1;undefined8 uVar2;if ((char)*param_1 < '\0') {if (*param_1 < 0xc2) {if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}uVar2 = 1;}else if (*param_1 < 0xe0) {if (((char)param_1[1] < '\0') && (param_1[1] < 0xc0)) {if (param_2 != (uint *)0x0) {*param_2 = (*param_1 & 0x1f) << 6 | param_1[1] & 0x3f;}uVar2 = 2;}else {if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}uVar2 = 1;}}else if (*param_1 < 0xf0) {if (*param_1 == 0xe0) {bVar1 = 0xa0;}else {bVar1 = 0x80;}if (bVar1 <= param_1[1]) {if (*param_1 == 0xed) {bVar1 = 0x9f;}else {bVar1 = 0xbf;}if (param_1[1] <= bVar1) {if (((char)param_1[2] < '\0') && (param_1[2] < 0xc0)) {if (param_2 != (uint *)0x0) {*param_2 = (param_1[1] & 0x3f) << 6 | (uint)(((ulong)*param_1 & 0xf) << 0xc) |param_1[2] & 0x3f;}return 3;}if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}return 1;}}if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}uVar2 = 1;}else if (*param_1 < 0xf5) {if (*param_1 == 0xf0) {bVar1 = 0x90;}else {bVar1 = 0x80;}if (bVar1 <= param_1[1]) {if (*param_1 == 0xf4) {bVar1 = 0x8f;}else {bVar1 = 0xbf;}if (param_1[1] <= bVar1) {if ((-1 < (char)param_1[2]) || (0xbf < param_1[2])) {if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}return 1;}if (((char)param_1[3] < '\0') && (param_1[3] < 0xc0)) {if (param_2 != (uint *)0x0) {*param_2 = (*param_1 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc |(param_1[2] & 0x3f) << 6 | param_1[3] & 0x3f;}return 4;}if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}return 1;}}if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}uVar2 = 1;}else {if (param_2 != (uint *)0x0) {*param_2 = -(uint)*param_1;}uVar2 = 1;}}else {if (param_2 != (uint *)0x0) {*param_2 = (uint)*param_1;}uVar2 = 1;}return uVar2;}