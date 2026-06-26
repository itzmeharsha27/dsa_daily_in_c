#include <stdio.h>

#define INF 99999

int main()
{
    int V = 4;

    int dist[100][100] = {
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0}
    };

    int i, j, k;

    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
            for(j=0;j<V;j++)
            {
            }
        }
    }

    return 0;
}