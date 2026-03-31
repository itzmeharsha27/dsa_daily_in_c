#include <stdio.h>

// Function to reverse digits using recursion
int reverse(int n, int rev)
{
    if(n == 0)
        return rev;

    return reverse(n/10, rev*10 + n%10);
}

int main()
{
    int n, revNum;

    printf("Enter a number: ");
    scanf("%d", &n);

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
        printf("Not Palindrome Number\n");

    return 0;
}