#include <stdio.h>

// Recursive factorial function
int factorial(int n)
{
    // Base case
    if(n == 0)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }

    int result = factorial(n);

    printf("Factorial of %d = %d\n", n, result);

    return 0;
}