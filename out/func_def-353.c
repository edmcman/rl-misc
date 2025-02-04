
# 1 
void resetvalue( unsigned int *mp3header )
{
   *mp3header ^= *mp3header;
}