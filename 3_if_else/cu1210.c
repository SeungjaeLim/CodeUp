#include<stdio.h>

int main()
{
    int n1, n2;
    int cal[5] = {400, 340, 170, 100, 70};
    scanf("%d %d", &n1, &n2);
    if(cal[n1-1] + cal[n2-1] > 500)
    {
        printf("angry");
    }
    else
    {
        printf("no angry");
    }
}
