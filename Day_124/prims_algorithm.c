#include <stdio.h>

#define V 5
#define INF 99999

int minKey(int key[], int mst[])
{
    int min=INF,index=-1;

    for(int i=0;i<V;i++)
    {
        if(!mst[i] && key[i]<min)
        {
            min=key[i];
            index=i;
        }
    }

    return index;
}

int main()
{
    return 0;
}