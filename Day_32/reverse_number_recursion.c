#include <stdio.h>

int reverse(int n, int rev);

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverse(n, 0);
    printf("Reversed number = %d\n", result);

    return 0;
}

int reverse(int n, int rev)
{
    if(n == 0)
        return rev;
}