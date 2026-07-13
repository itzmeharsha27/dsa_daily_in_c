#include <stdio.h>

// Candy Distribution using Greedy Two-Pass Algorithm

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int rating[] = {1,0,2};
    int n = sizeof(rating)/sizeof(rating[0]);

    int candy[100];
    int total = 0;

    // Give one candy to every child
    for(int i=0;i<n;i++)
        candy[i]=1;

    // Left to right pass
    for(int i=1;i<n;i++)
    {
        if(rating[i] > rating[i-1])
            candy[i]=candy[i-1]+1;
    }

    // Right to left pass
    for(int i=n-2;i>=0;i--)
    {
        if(rating[i] > rating[i+1])
            candy[i]=max(candy[i], candy[i+1]+1);
    }

    // Count total candies
    for(int i=0;i<n;i++)
        total += candy[i];

    printf("Minimum Candies  Required = %d\n", total);

    return 0;
}