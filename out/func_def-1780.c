
# 1 
void matt(float dest[3][3], float src[3][3])
{
    float tmp;

    tmp = src[0][1];
    dest[0][1] = src[1][0];
    dest[1][0] = tmp;

    tmp = src[0][2];
    dest[0][2] = src[2][0];
    dest[2][0] = tmp;

    tmp = src[2][1];
    dest[2][1] = src[1][2];
    dest[1][2] = tmp;

    if(dest!=src){
 dest[0][0]=src[0][0];
 dest[1][1]=src[1][1];
 dest[2][2]=src[2][2];
    }

}