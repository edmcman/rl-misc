
# 1 
void util_swap_bytes(unsigned int *src, unsigned int *dst)
{
 unsigned char *p1, *p2;
 p1 = (unsigned char *)src;
 p2 = (unsigned char *)dst;
 *(p2++) = *(p1+3);
 *(p2++) = *(p1+2);
 *(p2++) = *(p1+1);
 *p2 = *p1;
}