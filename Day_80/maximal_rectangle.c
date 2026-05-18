#include <stdio.h>

// Maximal Rectangle using Histogram + Stack

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    stack[++top] = val;
}

int pop()
{
    return stack[top--];
}

int largestArea(int arr[], int n)
{
    int maxArea = 0;
    top = -1;

    for(int i=0;i<=n;i++)
    {
        while(top != -1 && (i==n || arr[stack[top]] > arr[i]))
        {
            int h = arr[pop()];
            int width = (top == -1) ? i : i - stack[top] - 1;
            int area = h * width;

            if(area > maxArea)
                maxArea = area;
        }
        push(i);
    }

    return maxArea;
}

int main()
{
    int matrix[4][5] = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int rows = 4, cols = 5;
    int height[5] = {0};
    int maxRect = 0;

    // Convert each row into histogram
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }

        int area = largestArea(height, cols);
        if(area > maxRect)
            maxRect = area;
    }

    printf("Maximum Rectangle Area: %d\n", maxRect);

    return 0;
}