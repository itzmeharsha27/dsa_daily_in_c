#include <stdio.h>

// Function to find GCD using recursion (Euclid Algorithm)
int gcd(int a, int b)
{
    // Base case
    if(b == 0)
        return a;

    // Recursive call
    return gcd(b, a % b);
}

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Validate    input
    if(a <= 0 ||  b <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    // LCM formula
    lcm = (a * b) / gcd(a, b);

    printf("Numbers: %d and %d\n", a, b);
    printf("LCM = %d\n", lcm);

    return 0;
}