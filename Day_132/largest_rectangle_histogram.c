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
    int height[] = {2,1,5,6,2,3};
    int n = 6;
    int maxArea = 0;

    for(int i=0;i<=n;i++)
    {
        while(top!=-1 && (i==n || height[peek()] > height[i]))
        {
            pop();
        }

        push(i);
    }

    return 0;
}