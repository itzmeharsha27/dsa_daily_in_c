#include <stdio.h>
#include <string.h>

// Recursive function to check palindrome
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

    printf("Check completed.\n");

    if(result)
        printf("Palindrome String\n");
    else
        printf("Not Palindrome String\n");

    return 0;
}