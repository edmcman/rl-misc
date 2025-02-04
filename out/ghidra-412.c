
# 1 
uint func0(uint *param_1){*param_1 = *param_1 >> 0x18 | (*param_1 & 0xff00) << 8 | *param_1 >> 8 & 0xff00 | *param_1 << 0x18;return *param_1;}