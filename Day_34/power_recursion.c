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

    if(power < 0)
    {
        printf("Negative power not supported\n");
        return 0;
    }

    result = powerFunc(base, power);

    printf("%d ^ %d = %d\n", base, power, result);

    return 0;
}