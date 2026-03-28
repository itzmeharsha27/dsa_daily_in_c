#include <stdio.h>

// Recursive Fibonacci function
int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}