#include <stdio.h>

int main()
{
    int a[100][100];
    int n;
    int cnt = 1;
    scanf("%d",&n);
    for(int j = 0 ; j < n ; j++)
    {
        if(j%2 == 0)
        {
            for(int i = 0 ; i < n ; i++)
            {
                a[i][j] = cnt;
                cnt++;
            }
        }
        else
        {
            for(int i = n-1 ; i >= 0 ; i--)
            {
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
