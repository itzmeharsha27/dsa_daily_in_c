#include <stdio.h>

// Recursive function to find sum of digits
int sum(int n)
{
    // Base case
    if(n == 0)
        return 0;

    // Recursive case
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
    printf("Sum of digits = %d\n", result);

    return 0;
}