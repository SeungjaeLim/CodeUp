#include <stdio.h>

int main()
{
    int n, k;
    int r = 0;
    scanf("%d %d", &n, &k);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1; j<=n;j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                if( j%k == r%k )
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        r = r + k-1;
        printf("\n");
    }
    return 0;
}

