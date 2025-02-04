#include <stdio.h>

# 1 
void avg_course(double student_scores[10][5], double averages_course[10])
{

    for(int i = 0; i < 5; i++)
    {
        double tmp = 0;
        for(int j = 0; j < 10; j++)
        {
            tmp += student_scores[j][i];
        }
        averages_course[i] = tmp / 10;
    }
}