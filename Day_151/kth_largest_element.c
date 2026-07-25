#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int nums[] = {7,10,4,3,20,15};
    int k = 3;
    int n = 6;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]<nums[j])
                swap(&nums[i],&nums[j]);

    printf("Kth Largest = %d\n",nums[k-1]);

    return 0;
}