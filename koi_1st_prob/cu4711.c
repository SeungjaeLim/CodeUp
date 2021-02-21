#include<stdio.h>

int main()
{
    int passenger = 0;
    int max_passenger = 0;
    int boarding[4][2];
    for(int i = 0 ; i < 4; i++)
    {
        scanf("%d %d",&boarding[i][0], &boarding[i][1]);
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        passenger = passenger - boarding[i][0] + boarding[i][1];
        if(passenger > max_passenger)
        {
            max_passenger = passenger;
        }
    }
    printf("%d", max_passenger);
}
