#include<stdio.h>
#include<algorithm>
using namespace std;

struct student
{
    char name[11];
    int score[3];
    int order[2];
};

bool compare(struct student* a, struct student* b);

int main()
{
    int n, m;
    struct student* studentp[101];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        studentp[i] = (struct student*)malloc(sizeof(struct student));
        scanf("%s %d %d %d", studentp[i]->name, &(studentp[i]->score[0]), &(studentp[i]->score[1]), &(studentp[i]->score[2]));
    }
    stable_sort(studentp, studentp + n, compare);
    studentp[0]->order[0] = 1;
    studentp[0]->order[1] = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(studentp[0]->score[1] < studentp[i] -> score[1])
        {
            studentp[0]->order[0]++;
        }
        if(studentp[0]->score[2] < studentp[i] -> score[2])
        {
            studentp[0]->order[1]++;
        }
    }
    printf("%s %d %d", studentp[0]->name, studentp[0]->order[0], studentp[0]->order[1]);
}

bool compare(struct student* a, struct student* b)
{
    return a->score[0] > b->score[0];
}

