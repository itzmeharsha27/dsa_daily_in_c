#include <stdio.h>

// Meeting Rooms II using Sorting and Two Pointers

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    int start[] = {0,5,15};
    int end[] = {30,10,20};
    int n = sizeof(start)/sizeof(start[0]);

    sort(start,n);
    sort(end,n);

    int i=0,j=0;
    int rooms=0;
    int maxRooms=0;

    // Compare meeting start and end times
    while(i<n && j<n)
    {
        if(start[i] < end[j])
        {
            rooms++;

            if(rooms > maxRooms)
                maxRooms = rooms;

            i++;
        }
        else
        {
            rooms--;
            j++;
        }
    }

    printf("Minimum Meeting Rooms Required = %d\n", maxRooms);

    return 0;
}