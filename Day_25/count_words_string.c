#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check empty input
    if(str[0] == '\0')
    {
        printf("Empty string\n");
        return 0;
    }

    // Remove newline character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    // Count words using space detection
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' '))
        {
            words++;
        }
    }

    printf("Words = %d\n", words);

    return 0;
}