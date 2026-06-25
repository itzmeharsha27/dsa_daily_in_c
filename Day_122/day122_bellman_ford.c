#include <stdio.h>

#define MAX 100
#define INF 1000000

struct Edge
{
    int u, v, w;
};

int main()
{
    int V = 5;
    int E = 8;

    struct Edge edges[MAX];
    int dist[MAX];

    int src = 0;

    for(int i = 0; i < V; i++)
        dist[i] = INF;

    dist[src] = 0;

    return 0;
}