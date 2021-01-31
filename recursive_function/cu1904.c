#include<stdio.h>
void print_odd(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    print_odd(a,b);
}
void print_odd(int a, int b)
{
    if(a%2 == 1)
    {
        printf("%d ", a);
    }
    if(a==b)
    {
        return;
    }
    print_odd(a+1, b);
    return;
}
