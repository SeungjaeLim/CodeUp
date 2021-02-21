#include<stdio.h>

int main()
{
    int year, month;
    int calender[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d", &year, &month);
    if(month == 2)
    {
        if((year%400 == 0) || ((year%4 == 0) && (year%100 != 0)))
        {
            printf("%d", calender[month-1] + 1);
        }
        else
        {
            printf("%d",calender[month-1]);
        }
    }
    else
    {
        printf("%d",calender[month-1]);
    }
}
