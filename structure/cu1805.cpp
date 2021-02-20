#include<stdio.h>
#include<algorithm>

using namespace std;

struct device
{
    int num;
    int gas;
};

bool compare(struct device* a, struct device* b);

int main()
{
    struct device* devicep[101];
    int n;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        devicep[i] = (struct device*)malloc(sizeof(struct device));
        scanf("%d %d",&(devicep[i]->num), &(devicep[i]->gas));
    }
    sort(devicep,devicep + n, compare);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d %d\n", devicep[i]->num, devicep[i]->gas);
        free(devicep[i]);
    }
}

bool compare(struct device* a, struct device* b)
{
    return a->num < b->num;
}

