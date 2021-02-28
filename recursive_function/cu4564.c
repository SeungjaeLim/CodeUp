#include<stdio.h>
int memo[302] = {0,};
int score[302] = {0, };

int stair(int n);

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%d",&score[i]);
    }
    printf("%d", stair(n));
}

int stair(int n)
{
    if(memo[n] != 0)
    {
        return memo[n];
    }
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        memo[1] = score[1];
        return memo[1];
    }
    if(n == 2)
    {
        memo[2] = score[1] + score[2];
        return memo[2];
    }
    else
    {
        int case1, case2;
        case1 = stair(n-3) + score[n-1];
        case2 = stair(n-2);
        if(case1 > case2)
        {
            memo[n] = case1 + score[n];
        }
        else
        {
            memo[n] = case2 + score[n];
        }
        return memo[n];
    }
}

