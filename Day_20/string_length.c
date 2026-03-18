#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");

    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    // Check empty input
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

    printf("Length = %d\n", i);

    return 0;
}