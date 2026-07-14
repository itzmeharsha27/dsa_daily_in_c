#include <stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int nums[] = {2,3,1,1,4};
    int n = 5;

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for(int i=0;i<n-1;i++)
    {
        farthest = max(farthest, i + nums[i]);

        if(i == currentEnd)
        {
            jumps++;
            currentEnd = farthest;
        }
    }

    return 0;
}