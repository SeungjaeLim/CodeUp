#include<stdio.h>
int main()
{
    int count[100] = {0, };
    int buf, mean = 0, max_count = 0, mode;
    for(int i = 0 ; i < 10; i++)
    {
        scanf("%d", &buf);
        count[buf/10]++;
        mean = mean + buf;
    }
    mean = mean / 10;
    for(int i = 0 ; i < 100 ; i++)
    {
        if(count[i] > max_count)
        {
            max_count = count[i];
            mode = i*10;
        }
    }
    printf("%d\n%d",mean, mode);
}
