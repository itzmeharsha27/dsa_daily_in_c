#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;
    else
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
    printf("Sum = %d\n", result);

    return 0;
}