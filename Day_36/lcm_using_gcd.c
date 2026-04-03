#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a * b) / gcd(a, b);

    printf("LCM = %d\n", lcm);

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}