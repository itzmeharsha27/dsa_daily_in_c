#include <stdio.h>

// 3Sum

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int nums[]={-1,0,1,2,-1,-4};
    int n=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]>nums[j])
                swap(&nums[i],&nums[j]);

    for(int i=0;i<n-2;i++)
    {
        int left=i+1,right=n-1;

        while(left<right)
        {
            int sum=nums[i]+nums[left]+nums[right];

            if(sum==0)
            {
                printf("%d %d %d\n",nums[i],nums[left],nums[right]);
                break;
            }
            else if(sum<0)
                left++;
            else
                right--;
        }
    }

    return 0;
}