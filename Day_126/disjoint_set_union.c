#include <stdio.h>

// Disjoint Set Union (Union-Find)

#define MAX 100

int parent[MAX];

int find(int x)
{
    if(parent[x] == x)
        return x;

    return parent[x] = find(parent[x]); // Path Compression
}

void unite(int x, int y)
{
    parent[find(x)] = find(y);
}

int main()
{
    int n = 5;

    // Initialize each element as its own parent
    for(int i=0;i<n;i++)
        parent[i] = i;

    unite(0,1);
    unite(2,3);
    unite(1,2);

    printf("Representative of 0 = %d\n", find(0));
    printf("Representative of 3 = %d\n", find(3));

    if(find(0) == find(3))
        printf("0 and 3 belong to the same set\n");

    return 0;
}