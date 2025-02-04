
# 1 
int func0(EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src){int in_EAX;int local_c;for (local_c = 0; local_c < 10; local_c = local_c + 1) {in_EAX = *(int *)(src + (long)local_c * 4);*(int *)(dst + (long)local_c * 4) = in_EAX;}return in_EAX;}