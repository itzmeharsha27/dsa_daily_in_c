#include <stdio.h>

// Function to calculate sum of digits using recursion
int sum(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sum(n / 10);
}

int main()
{
    int n;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = sum(n);

    printf("Input Number = %d\n", n);
    printf("Sum of digits = %d\n", result);

    return 0;
}