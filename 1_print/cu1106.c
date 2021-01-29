#include <stdio.h>

int main()
{
    int range = -1;
    for( int i = 1 ; i <= 31 ; i++ )
    {
        range = range * 2;
    }
    printf("%d %d", range, -(range+1));
}

