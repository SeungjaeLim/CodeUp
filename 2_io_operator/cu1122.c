#include<stdio.h>
int main()
{
    int sec;
    int min = 0;
    scanf("%d",&sec);
    while(sec >= 60)
    {
        min++;
        sec = sec - 60;
    }
    printf("%d %d", min, sec);
}
