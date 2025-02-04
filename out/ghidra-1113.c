#include <assert.h>

#include <errno.h>

#include <stdbool.h>

#include <stddef.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

# 1 
bool func0(char *param_1,ulong *param_2){char *pcVar1;int *piVar2;ulong local_10;pcVar1 = strcasestr(param_1,"server");local_10 = (ulong)(pcVar1 != (char *)0x0);pcVar1 = strcasestr(param_1,"network");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"terminal");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"host");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"router");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"switch");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"equipment");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"HDD");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"storage");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"CPU");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"load");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"traffic");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"latency");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"hop");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"ttl");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"as");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"assoc");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"less");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"greater");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"equal");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"than");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"ge");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"gt");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"eq");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"le");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"lt");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"max");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}pcVar1 = strcasestr(param_1,"min");if (pcVar1 != (char *)0x0) {local_10 = local_10 + 1;}*param_2 = local_10;piVar2 = __errno_location();*piVar2 = 0;return local_10 != 0;}