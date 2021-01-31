#include<stdio.h>
void print_n(int n);
int main()
{
    int n;
    scanf("%d", &n);
    print_n(n);
}
void print_n(int n)
{
    if(n == 1)
    {
        printf("%d\n", n);
        return;
    }
    print_n(n-1);
    printf("%d\n",n);
    return;
}
