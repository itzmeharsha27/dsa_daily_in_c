#include <stdio.h>

#define MAX 100

int parent[MAX];

int find(int x)
{
    if(parent[x] == x)
        return x;

    return find(parent[x]);
}

void unite(int x, int y)
{
    parent[find(x)] = find(y);
}

int main()
{
    int n = 5;

    for(int i=0;i<n;i++)
        parent[i]=i;

    unite(0,1);
    unite(2,3);

    return 0;
}