#include <stdio.h>

int powerFunc(int base, int power);

int main()
{
    int base, power, result;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    result = powerFunc(base, power);
    printf("Result = %d\n", result);

    return 0;
}

int powerFunc(int base, int power)
{
    return 0;
}