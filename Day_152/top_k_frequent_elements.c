#include <stdio.h>

// Top K Frequent Elements using Frequency Counting and Sorting

struct Item
{
    int value;
    int freq;
};

void swap(struct Item *a,struct Item *b)
{
    struct Item temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int nums[]={1,1,1,2,2,3};
    int k=2;
    int n=sizeof(nums)/sizeof(nums[0]);

    struct Item arr[100];
    int size=0;

    // Count frequency of each element
    for(int i=0;i<n;i++)
    {
        int found=0;

        for(int j=0;j<size;j++)
        {
            if(arr[j].value==nums[i])
            {
                arr[j].freq++;
                found=1;
                break;
            }
        }

        if(!found)
        {
            arr[size].value=nums[i];
            arr[size].freq=1;
            size++;
        }
    }

    // Sort by frequency in descending order
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i].freq<arr[j].freq)
                swap(&arr[i],&arr[j]);
        }
    }

    printf("Top %d Frequent Elements:\n",k);

    for(int i=0;i<k;i++)
        printf("%d ",arr[i].value);

    printf("\n");

    return 0;
}