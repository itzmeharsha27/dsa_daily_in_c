#include <stdio.h>

// Function to calculate power using recursion
int powerFunc(int base, int power)
{
    // Base case
    if(power == 0)
        return 1;

    // Recursive multiplication
    return base * powerFunc(base, power - 1);
}

int main()
{
    int base, power, result;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    // Validate input
    if(power < 0)
    {
        printf("Negative power not supported\n");
        return 0;
    }

    result = powerFunc(base, power);

    printf("%d ^ %d = %d\n", base, power, result);

    return 0;
}