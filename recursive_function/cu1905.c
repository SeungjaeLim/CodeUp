#include<stdio.h>
int cal_sum(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", cal_sum(n));
}
int cal_sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + cal_sum(n-1);
}
