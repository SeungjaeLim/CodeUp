#include<stdio.h>
#include<algorithm>
using namespace std;

struct student
{
    char name[11];
    int score;
};

bool compare(struct student* a, struct student* b);

int main()
{
    int n, m;
    struct student* studentp[101];
    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < n ; i++)
    {
        studentp[i] = (struct student*)malloc(sizeof(struct student));
        scanf("%s %d", studentp[i]->name, &(studentp[i]->score));
    }
    stable_sort(studentp, studentp + n, compare);
    for(int i = 0 ; i < m ; i++)
    {
        printf("%s\n", studentp[i]->name);
    }
}

bool compare(struct student* a, struct student* b)
{
    return a->score > b->score;
}

