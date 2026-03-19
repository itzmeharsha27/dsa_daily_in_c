#include <stdio.h>

int main()
{
    char str[100];
    int i, start, end;
    char temp;

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

    // Reverse string using two-pointer approach
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}