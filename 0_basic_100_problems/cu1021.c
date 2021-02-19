#include <stdio.h>

int main()
{
    char *p = (char *)malloc(sizeof(char)*50);
    scanf("%s",p);
    printf("%s",p);
    return 0;
}

