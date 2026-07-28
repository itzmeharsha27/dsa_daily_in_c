#include <stdio.h>

int main()
{
    int nums[]={9,4,2,10,7};
    int k=2;
    int n=5;

    int maxValue;

    for(int i=0;i<=n-k;i++)
    {
        maxValue=nums[i];

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