#include<stdio.h>
int main()
{
    int a[7];
    int max_odd = 0;
    int max_even = 0;
    for(int i = 0 ; i< 7 ; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
        {
            if(a[i]>=max_even)
            {
                max_even = a[i];
            }
        }
        else
        {
            if(a[i]>=max_odd)
            {
                max_odd = a[i];
            }
        }
    }
    printf("%d",max_even + max_odd);
}

