#include<stdio.h>

int main()
{
    int m,n;
    char oper;
    scanf("%d%c%d", &m, &oper, &n);
    switch(oper)
    {
        case '+':
            printf("%d",m+n);
            break;
        case '-':
            printf("%d",m-n);
            break;
        case '*':
            printf("%d",m*n);
            break;
        case '/':
            printf("%.2f",(float)m/n);
            break;
    }
}

