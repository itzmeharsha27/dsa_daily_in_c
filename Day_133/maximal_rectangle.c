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

int main()
{
    int matrix[ROWS][COLS] = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int answer = 0;

    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            if(matrix[i][j])
                histogram[j]++;
            else
                histogram[j]=0;
        }

        int area = largestHistogram(histogram,COLS);

        if(area > answer)
            answer = area;
    }

    return 0;
}