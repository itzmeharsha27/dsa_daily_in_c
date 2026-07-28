#include <stdio.h>

// Sliding Window Maximum using Brute Force

int main()
{
    int nums[]={1,3,-1,-3,5,3,6,7};
    int k=3;
    int n=sizeof(nums)/sizeof(nums[0]);

    // Traverse each window
    for(int i=0;i<=n-k;i++)
    {
        int maxValue=nums[i];

        // Find maximum element in current window
        for(int j=i+1;j<i+k;j++)
        {
            if(nums[j]>maxValue)
                maxValue=nums[j];
        }

        printf("%d ",maxValue);
    }

    printf("\n");

    return 0;
}