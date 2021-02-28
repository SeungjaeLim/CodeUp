#include<stdio.h>
int main()
{
    int year;
    int ten, twelve;
    int bias_ten, bias_twelve;
    bias_ten = 2013 % 10;
    bias_twelve = 2013 % 12;
    bias_ten = 9 - bias_ten;
    bias_twelve = 5 - bias_twelve;
    scanf("%d",&year);
    ten = (year + bias_ten) %10;
    twelve = (year + bias_twelve) % 12;
    printf("%c%d",'A'+twelve,ten);
}

