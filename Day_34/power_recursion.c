#include <stdio.h>

// Recursive function to calculate power
int powerFunc(int base, int power)
{
    if(power == 0)
        return 1;
    else
        return base * powerFunc(base, power - 1);
}

int main()
{
    int base, power, result;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    result = powerFunc(base, power);
    printf("Result = %d\n", result);

    return 0;
}