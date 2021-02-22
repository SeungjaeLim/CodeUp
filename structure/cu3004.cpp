#include<stdio.h>
#include<algorithm>
using namespace std;
struct data
{
    int num;
    int idx;
    int order;
};

bool compare1(struct data* a, struct data* b);
bool compare2(struct data* a, struct data* b);

int main()
{
    struct data* datap[50001];
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        datap[i] = (struct data*)malloc(sizeof(struct data));
        scanf("%d", &datap[i]->num);
        datap[i]->idx = i;
    }
    sort(datap, datap+n, compare1);
    for(int i = 0 ; i < n ; i++)
    {
        datap[i]->order = i;
    }
    sort(datap, datap+n, compare2);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", datap[i]->order);
        free(datap[i]);
    }
}

bool compare1(struct data* a, struct data* b)
{
    return a->num < b->num;
}

bool compare2(struct data* a, struct data* b)
{
    return a->idx < b->idx;
}
