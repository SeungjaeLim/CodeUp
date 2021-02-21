#include<stdio.h>

int donate(int n);

int main()
{
    int k,h;
    scanf("%d %d", &k, &h);
    printf("%d",donate(k) + donate(h));
}

int donate(int n)
{
    if(n%2 == 0)
    {
        return n/2 * 10;
    }
    else
    {
        return n/2 + 1;
    }
}
