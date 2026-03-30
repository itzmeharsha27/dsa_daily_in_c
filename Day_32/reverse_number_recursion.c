#include <stdio.h>

// Function to reverse number using recursion
int reverse(int n, int rev)
{
    if(n == 0)
        return rev;

    return reverse(n/10, rev*10 + n%10);
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = reverse(n, 0);

    printf("Input Number = %d\n", n);
    printf("Reversed Number = %d\n", result);

    return 0;
}