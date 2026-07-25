#include <stdio.h>

// Greedy Sorting Approach

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int nums[] = {3,2,1,5,6,4};
    int k = 2;
    int n = 6;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]<nums[j])
                swap(&nums[i],&nums[j]);

    printf("Kth Largest Element = %d\n",nums[k-1]);

    return 0;
}