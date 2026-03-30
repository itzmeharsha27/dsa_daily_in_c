#include <stdio.h>

// Recursive function to reverse number
int reverse(int n, int rev)
{
    // Base case
    if(n == 0)
        return rev;

    // Recursive case
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

    printf("Original Number = %d\n", n);
    printf("Reversed Number = %d\n", result);

    return 0;
}