#include<stdio.h>
int main()
{
    int yut[4];
    int state = 0;
    for(int i = 0 ; i < 4 ; i++)
    {
        scanf("%d",&yut[i]);
        state = state + yut[i];
    }
    switch(state)
    {
        case 0 :
            printf("¸ğ");
            break;
        case 1 :
            printf("µµ");
            break;
        case 2 :
            printf("°³");
            break;
        case 3 :
            printf("°É");
            break;
        default :
            printf("À·");
    }
    return 0;
}
