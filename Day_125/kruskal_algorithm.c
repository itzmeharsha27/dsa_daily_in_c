#include <stdio.h>

#define MAX 100

struct Edge
{
    int u, v, w;
};

int parent[MAX];

int find(int x)
{
    while(parent[x] != x)
        x = parent[x];
    return x;
}

void unite(int x, int y)
{
    parent[find(x)] = find(y);
}

int main()
{
    int V = 4;
    int E = 5;

    struct Edge edges[] = {
        {2,3,4},
        {0,3,5},
        {0,2,6},
        {0,1,10},
        {1,3,15}
    };

    return 0;
}