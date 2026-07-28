#include <stdio.h>

// Sliding Window Maximum

int main()
{
    int nums[]={1,3,-1,-3,5,3,6,7};
    int k=3;
    int n=8;

    for(int i=0;i<=n-k;i++)
    {
        int maxValue=nums[i];

        for(int j=i;j<i+k;j++)
        {
            if(nums[j]>maxValue)
                maxValue=nums[j];
        }

        printf("%d ",maxValue);
    }

    printf("\n");

    return 0;
}