#include <stdio.h>

// Function to reverse digits using recursion
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
    int n, revNum;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate input
    if(n < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    revNum = reverse(n, 0);

    printf("Input Number = %d\n", n);
    printf("Reversed Number = %d\n", revNum);

    if(n == revNum)
        printf("Palindrome Number\n");
    else
        printf("Not  Palindrome Number\n");

    return 0;
}