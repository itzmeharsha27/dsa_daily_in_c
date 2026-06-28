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
    int cost = 0;

    struct Edge edges[] = {
        {2,3,4},
        {0,3,5},
        {0,2,6},
        {0,1,10},
        {1,3,15}
    };

    for(int i=0;i<V;i++)
        parent[i]=i;

    printf("Edges in MST:\n");

    for(int i=0;i<E;i++)
    {
        if(find(edges[i].u) != find(edges[i].v))
        {
            printf("%d - %d : %d\n",
                   edges[i].u,
                   edges[i].v,
                   edges[i].w);

            cost += edges[i].w;
            unite(edges[i].u, edges[i].v);
        }
    }

    printf("Total Cost = %d\n", cost);

    return 0;
}