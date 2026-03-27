#include <stdio.h>

int factorial(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("Factorial = %d\n", result);

    return 0;
}

int factorial(int n)
{
    return 0;
}