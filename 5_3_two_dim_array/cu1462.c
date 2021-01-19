#include <stdio.h>

int main()
{
    int a[100][100];
    int n;
    int cnt = 1;
    scanf("%d",&n);
    for(int j = 0 ; j < n ; j++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            a[i][j] = cnt;
            cnt++;
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
