
# 1 
void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int flag;

    k = 0;
    for (i = 0; s1[i] != '\0'; ++i)
    {
        flag = 0;

        for (j = 0; s2[j] != '\0'; ++j)
        {
            if (s1[i] == s2[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            s1[k++] = s1[i];
    }
    s1[k] = '\0';

    return;
}