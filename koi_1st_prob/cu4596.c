#include<stdio.h>
struct point{
    int row;
    int column;
};

int main()
{
    struct point max_idx;
    int max_num = 0;
    int buf;
    for(int i = 0 ; i < 9 ; i++)
    {
        for(int j = 0 ; j < 9 ; j++)
        {
            scanf("%d", &buf);
            if(buf>max_num)
            {
                max_num = buf;
                max_idx.row = i + 1;
                max_idx.column = j+1;
            }
        }
    }
    printf("%d\n%d %d",max_num,max_idx.row,max_idx.column);
}
