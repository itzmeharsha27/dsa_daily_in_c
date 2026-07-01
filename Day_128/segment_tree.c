#include <stdio.h>

#define MAX 100

int tree[4 * MAX];
int arr[MAX];

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = arr[start];
        return;
    }
}

int main()
{
    return 0;
}