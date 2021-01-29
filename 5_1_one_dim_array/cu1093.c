#include <stdio.h>

int main()
{
    int student[24] = {0,};
    int k, n;
    scanf("%d", &k);
    for(int i = 0 ; i < k ; i++ )
    {
        scanf("%d", &n);
        student[n]++;
    }
    for(int i = 1 ; i < 24 ; i++)
    {
        printf("%d ", student[i]);
    }
    return 0;
}

