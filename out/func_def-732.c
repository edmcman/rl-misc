
# 1 
void toggle(int board[20][40], int x, int y)
{






    if ((x > 0 && x <= 40) && (y > 0 && y <= 20))
        board[20 - y][x - 1] = !(board[20 - y][x - 1]);
}