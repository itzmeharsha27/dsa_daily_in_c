#include <stdio.h>

// Function to generate Fibonacci using recursion
int fib(int n)
{
    // Base cases
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    // Recursive relation
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Fibonacci Series:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d  ",  fib(i));
    }

    return 0;
}