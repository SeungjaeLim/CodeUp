#include <stdio.h>
int main()
{
    int a, n[100][100];
    int k=1;
    scanf("%d", &a);
    for(int i=0; i<=a-1; i++)
    {
        for(int j=0; j<=a-1; j++)
        {
            n[i][j]=k++;
        }
    }

    for(int i=0; i<=a-1; i++)
    {
        for(int j=0; j<=a-1; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}
