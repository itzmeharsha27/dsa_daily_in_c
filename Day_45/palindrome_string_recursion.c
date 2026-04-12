#include <stdio.h>
#include <string.h>

// Function to check palindrome using recursion
int isPalindrome(char str[], int start, int end)
{
    if(start >= end)
        return 1;

    if(str[start] != str[end])
        return 0;

    return isPalindrome(str, start+1, end-1);
}

int main()
{
    char str[100];
    int len, result;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    if(len <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = isPalindrome(str, 0, len-1);

    printf("First char = %c\n", str[0]);

    if(result)
        printf("Palindrome String\n");
    else
        printf("Not Palindrome String\n");

    return 0;
}