#include <stdio.h>

#define V 5
#define INF 99999

int main()
{
    int graph[V][V] = {
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0}
    };

    int parent[V];
    int key[V];
    int mst[V];

    for(int i=0;i<V;i++)
    {
        key[i]=INF;
        mst[i]=0;
    }

    key[0]=0;
    parent[0]=-1;

    return 0;
}