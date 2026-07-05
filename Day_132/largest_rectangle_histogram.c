#include <stdio.h>

// Largest Rectangle in Histogram using Monotonic Stack

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int peek()
{
    return stack[top];
}

int main()
{
    int height[] = {2,1,5,6,2,3};
    int n = sizeof(height) / sizeof(height[0]);
    int maxArea = 0;

    // Process all bars
    for(int i=0;i<=n;i++)
    {
        while(top!=-1 && (i==n || height[peek()] > height[i]))
        {
            int h = height[pop()];
            int w = (top==-1) ? i : i-peek()-1;
            int area = h * w;

            if(area > maxArea)
                maxArea = area;
        }

        push(i);
    }

    printf("Largest Rectangle Area = %d\n", maxArea);

    return 0;
}