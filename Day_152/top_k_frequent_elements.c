#include <stdio.h>

struct Item
{
    int value;
    int freq;
};

int main()
{
    int nums[] = {1,1,1,2,2,3};
    int k = 2;
    int n = 6;

    struct Item arr[100];
    int size = 0;

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

    return 0;
}