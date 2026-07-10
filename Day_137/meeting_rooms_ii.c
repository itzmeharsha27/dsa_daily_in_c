#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
}

int main()
{
    int start[] = {0,5,15};
    int end[] = {30,10,20};
    int n = 3;

    sort(start,n);
    sort(end,n);

    int i=0,j=0;
    int rooms=0,maxRooms=0;

    while(i<n && j<n)
    {
        if(start[i] < end[j])
        {
            rooms++;
            i++;
        }
        else
        {
            rooms--;
            j++;
        }
    }

    return 0;
}