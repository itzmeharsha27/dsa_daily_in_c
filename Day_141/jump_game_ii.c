#include <stdio.h>

// Jump Game II using Greedy Algorithm

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int nums[] = {2,3,1,1,4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    // Traverse until the second last index
    for(int i=0;i<n-1;i++)
    {
        // Update the farthest position reachable
        farthest = max(farthest, i + nums[i]);

        // Need another jump
        if(i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;
        }
    }
 
    printf("Minimum  Numbe r    of  Jum ps = % d\n", jumps);
 
    return 0;
}