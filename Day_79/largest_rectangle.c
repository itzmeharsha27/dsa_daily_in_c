#include <stdio.h>

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
    int arr[] = {2,4};
    int n = 2;
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

    printf("Max Area: %d\n", maxArea);

    return 0;
}