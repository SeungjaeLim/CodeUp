#include<stdio.h>
int main()
{
    int board[11][10];
    int is_safe = 1;
    for(int i = 0 ; i < 11 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }
    for(int j = 0 ; j < 10 ; j++)
    {
        if(board[10][j] == 1)
        {
            for(int k = 9 ; k>= 0 ; k--)
            {
                if(board[k][j] != 0)
                {
                    is_safe = 0;
                    if(board[k][j] > 0)
                    {
                        printf("%d crash\n",j+1);
                    }
                    else
                    {
                        printf("%d fall\n", j+1);
                    }
                    break;
                }

            }
            if(is_safe)
            {
                printf("%d safe\n",j+1);
            }
            is_safe = 1;
        }
        else
        {
            continue;
        }
    }
}
