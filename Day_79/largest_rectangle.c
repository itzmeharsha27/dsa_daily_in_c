#include <stdio.h>

// Largest Rectangle in Histogram

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

int main()
{
    int arr[] = {2,1,5,6,2,3};
    int n = 6;
    int maxArea = 0;

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

    return 0;
}