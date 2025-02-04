
# 1 
void parseFilename(char buffer[1024], char fileBuffer[1024], int p)
{
    int c = 0;
    for(int i = p; i < 1024; i++)
    {
        if(buffer[i] == ' ' || buffer[i] == '\n')
        {
            return;
        }
        else
        {
            fileBuffer[c] = buffer[i];
            c++;
        }
    }
}