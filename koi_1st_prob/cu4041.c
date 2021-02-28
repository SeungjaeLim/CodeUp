#include<stdio.h>
int main()
{
    int n;
    int rev_n = 0;
    int sum_n = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        rev_n = rev_n * 10 + n%10;
        sum_n = sum_n + n%10;
        n = n/10;
    }
    printf("%d\n%d", rev_n, sum_n);
}
