#include <stdio.h>

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
    int height[] = {2,4};
    int n = 2;
    int maxArea = 0;

    for(int i=0;i<=n;i++)
    {
        while(top!=-1 && (i==n || height[peek()] > height[i]))
        {
            int h = height[pop()];
            int w = (top==-1) ? i : i-peek()-1;

            if(h*w > maxArea)
                maxArea = h*w;
        }

        push(i);
    }

    printf("Maximum Area = %d\n", maxArea);

    return 0;
}