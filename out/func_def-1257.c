
# 1 
void parseCommand(char buffer[1024], char cmdBuffer[1024], int *pos)
{
    for(int i = 0; i < 1024; i++)
        {
            if(buffer[i] == ' ' || buffer[i] == '\n')
            {
                *pos = i + 1;
                i = 1024;
            }
            else
                cmdBuffer[i] = buffer[i];
        }
}