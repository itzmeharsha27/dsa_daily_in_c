#include <stdio.h>
#include <string.h>

// Function to check palindrome string using recursion
int isPalindrome(char str[], int start, int end)
{
    // Base case
    if(start >= end)
        return 1;

    // If characters mismatch
    if(str[start] != str[end])
        return 0;

    // Recursive call
    return isPalindrome(str, start+1, end-1);
}

int main()
{
    char str[100];
    int len, result;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Validate input
    if(len <=  0)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = isPalindrome(str, 0, len-1);

    if(result)
        printf("Palindrome String\n");
    else
        printf("Not Palindrome String\n");

    return 0;
}