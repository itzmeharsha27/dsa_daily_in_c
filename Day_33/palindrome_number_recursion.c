#include <stdio.h>

int reverse(int n, int rev);

int main()
{
    int n, revNum;

    printf("Enter a number: ");
    scanf("%d", &n);

    revNum = reverse(n, 0);

    if(n == revNum)
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome Number\n");

    return 0;
}

int reverse(int n, int rev)
{
    if(n == 0)
        return rev;
}