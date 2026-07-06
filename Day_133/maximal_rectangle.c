#include <stdio.h>

#define ROWS 4
#define COLS 5

int histogram[COLS] = {0};

int largestHistogram(int arr[], int n)
{
    int maxArea = 0;

    for(int i=0;i<n;i++)
    {
        int minHeight = arr[i];

        for(int j=i;j<n;j++)
        {
            if(arr[j] < minHeight)
                minHeight = arr[j];

            int area = minHeight * (j-i+1);

            if(area > maxArea)
                maxArea = area;
        }
    }

    return maxArea;
}