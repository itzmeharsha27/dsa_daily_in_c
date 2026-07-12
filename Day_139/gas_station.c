#include <stdio.h>

// Gas Station using Greedy Algorithm

int main()
{
    int gas[] = {1,2,3,4,5};
    int cost[] = {3,4,5,1,2};
    int n = sizeof(gas) / sizeof(gas[0]);

    int totalGas = 0;
    int totalCost = 0;
    int start = 0;
    int tank = 0;

    // Traverse all stations
    for(int i=0;i<n;i++)
    {
        totalGas += gas[i];
        totalCost += cost[i];

        tank += gas[i] - cost[i];

        // Reset starting station if tank becomes negative
        if(tank < 0)
        {
            start = i + 1;
            tank = 0;
        }
    }

    if(totalGas >= totalCost)
        printf("Starting Gas Station Index = %d\n", start);
    else
        printf("Starting Gas Station Index = -1\n");

    return 0;
}