#include <stdio.h>

int main()
{
    char str[100];
    int i, start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check empty string
    if(str[0] == '\0')
    {
        printf("Empty string\n");
        return 0;
    }

    // Find length
    for(i = 0; str[i] != '\0'; i++)
    {

    }

    // Remove newline if present
    if(str[i-1] == '\n')
    {
        str[i-1] = '\0';
        i--;
    }

    start = 0;
    end = i - 1;

    // Compare characters from both ends
    while(start < end)
    {
        if(str[start] != str[end])
        {
            printf("Not Palindrome\n");
            return 0;
        }

        start++;
        end--;
    }

    printf("Palindrome\n");

    return 0;
}