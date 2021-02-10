#include <stdio.h>

int main()
{
    int a[100][100];
    int m, n;
    int cnt = 1;
    scanf("%d %d",&n,&m);
    for(int j = m-1 ; j >= 0  ; j--)
    {
        for(int i = n-1 ; i >= 0 ; i--)
        {
            a[i][j] = cnt;
            cnt++;
        }
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

