#include<stdio.h>
void iq_150(int(*stair)[21], int n);
int main()
{
    int stair[21][21];
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&stair[i][0]);
    }
    iq_150(stair, n);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            printf("%d ", stair[i][j]);
        }
        printf("\n");
    }
}
void iq_150(int(*stair)[21], int n)
{
    for(int i = 1 ; i < n; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            stair[i][j] = stair[i][j-1] - stair[i-1][j-1];
        }
    }
    return;
}
