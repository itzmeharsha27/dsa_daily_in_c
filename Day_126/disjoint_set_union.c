#include <stdio.h>

#define MAX 100

int parent[MAX];

int find(int x)
{
    if(parent[x] == x)
        return x;

    return find(parent[x]);
}

int main()
{
    int n = 5;

    return 0;
}