#include <stdio.h>

// Function to find GCD
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a == 0 || b == 0)
    {
        printf("LCM not defined for zero\n");
        return 0;
    }

    lcm = (a * b) / gcd(a, b);

    printf("LCM = %d\n", lcm);

    return 0;
}