#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = n;i<=k;i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}

