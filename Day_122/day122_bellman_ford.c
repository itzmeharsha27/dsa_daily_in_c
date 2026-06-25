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

    struct Edge edges[MAX] = {
        {0,1,-1},
        {0,2,4},
        {1,2,3},
        {1,3,2},
        {1,4,2},
        {3,2,5},
        {3,1,1},
        {4,3,-3}
    };

    int dist[MAX];

    int src = 0;

    for(int i = 0; i < V; i++)
        dist[i] = INF;

    dist[src] = 0;

    for(int i = 1; i < V; i++)
    {
    }

    return 0;
}