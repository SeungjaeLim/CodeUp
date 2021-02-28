#include<stdio.h>
int main()
{
    int n[5];
    int num = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &n[i]);
        num = num + n[i]*n[i];
    }
    num = num%10;
    printf("%d", num);
}

