#include <stdio.h>
#include <string.h>

// Remove K Digits using Greedy Stack Algorithm

int main()
{
    char num[] = "1432219";
    int k = 3;
    int n = strlen(num);

    char stack[100];
    int top = -1;

    // Traverse each digit
    for(int i=0;i<n;i++)
    {
        // Remove larger previous digits
        while(top >= 0 && k > 0 && stack[top] > num[i])
        {
            top--;
            k--;
        }

        stack[++top] = num[i];
    }

    // Remove remaining digits if needed
    while(k > 0)
    {
        top--;
        k--;
    }

    stack[top + 1] = '\0';

    printf("Smallest Number = %s\n", stack);

    return 0;
}