#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    int result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sum(n);
    printf("Sum = %d\n", result);

    return 0;
}

int sum(int n)
{
    return 0;
}