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
            printf("��");
            break;
        case 1 :
            printf("��");
            break;
        case 2 :
            printf("��");
            break;
        case 3 :
            printf("��");
            break;
        default :
            printf("��");
    }
    return 0;
}
