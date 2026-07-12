#include <stdio.h>

// Gas Station

int main()
{
    int gas[] = {1,2,3,4,5};
    int cost[] = {3,4,5,1,2};
    int n = 5;

    int totalGas = 0;
    int totalCost = 0;
    int start = 0;
    int tank = 0;

    for(int i=0;i<n;i++)
    {
        totalGas += gas[i];
        totalCost += cost[i];

        tank += gas[i] - cost[i];

        if(tank < 0)
        {
            start = i + 1;
            tank = 0;
        }
    }

    return 0;
}