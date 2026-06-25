#include <stdio.h>

// Bellman-Ford Algorithm

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

    // Initialize distances
    for(int i = 0; i < V; i++)
        dist[i] = INF;

    dist[src] = 0;

    // Relax all edges V-1 times
    for(int i = 1; i < V; i++)
    {
        for(int j = 0; j < E; j++)
        {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if(dist[u] != INF && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    // Check for negative cycle
    for(int j = 0; j < E; j++)
    {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if(dist[u] != INF && dist[u] + w < dist[v])
        {
            printf("Negative Weight Cycle Detected\n");
            return 0;
        }
    }

    printf("Shortest distances from node %d:\n", src);
    for(int i = 0; i < V; i++)
        printf("To %d = %d\n", i, dist[i]);

    return 0;
}