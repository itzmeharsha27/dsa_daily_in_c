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

int main()
{
    return 0;
}