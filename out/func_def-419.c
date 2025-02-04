#include <stdio.h>

#include <string.h>

# 1 
void msf_frame_to_msf (long frame, int *minutes, int *seconds, int *frames)
{
 *frames = frame % 75;
 frame /= 75;
 *seconds = frame % 60;
 frame /= 60;
 *minutes = frame;
}