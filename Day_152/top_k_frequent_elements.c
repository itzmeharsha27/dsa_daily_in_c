#include <stdio.h>

struct Item
{
    int value;
    int freq;
};

void swap(struct Item *a,struct Item *b)
{
    struct Item t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int nums[]={1,1,1,2,2,3};
    int k=2;
    int n=6;

    struct Item arr[100];
    int size=0;

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

    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i].freq<arr[j].freq)
                swap(&arr[i],&arr[j]);

    for(int i=0;i<k;i++)
        printf("%d ",arr[i].value);

    return 0;
}