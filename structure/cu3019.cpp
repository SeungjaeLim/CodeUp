#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct schedule
{
    char name[100];
    int year;
    int month;
    int day;
};

bool compare_name(struct schedule* a, struct schedule* b);
bool compare_year(struct schedule* a, struct schedule* b);
bool compare_month(struct schedule* a, struct schedule* b);
bool compare_day(struct schedule* a, struct schedule* b);

int main()
{
    int n;
    struct schedule* schedulep[101];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        schedulep[i] = (struct schedule*)malloc(sizeof(struct schedule));
        scanf("%s %d %d %d",schedulep[i]->name, &(schedulep[i]->year), &(schedulep[i]->month), &(schedulep[i]->day));
    }
    stable_sort(schedulep, schedulep + n, compare_name);
    stable_sort(schedulep, schedulep + n, compare_day);
    stable_sort(schedulep, schedulep + n, compare_month);
    stable_sort(schedulep, schedulep + n, compare_year);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%s\n",schedulep[i]->name);
        free(schedulep[i]);
    }
}
bool compare_name(struct schedule* a, struct schedule* b)
{
    return strcmp(a->name, b->name) < 0;
}
bool compare_year(struct schedule* a, struct schedule* b)
{
    return a->year < b->year;
}
bool compare_month(struct schedule* a, struct schedule* b)
{
    return a->month < b->month;
}
bool compare_day(struct schedule* a, struct schedule* b)
{
    return a->day < b->day;
}

