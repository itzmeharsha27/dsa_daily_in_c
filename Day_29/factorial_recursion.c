#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Base case: factorial of 0 is 1
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

    // Validate input
    if(n < 0)
    {
        printf("Factorial  not defined for negative numbers\n");
        return 0;
    }

    int result =  factorial(n);

    printf("Factorial of %d = %d\n", n, result);

    return 0;
}