#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[0] == '\0')
    {
        printf("Empty string\n");
        return 0;
    }

    // Remove newline
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    // Count words ignoring multiple spaces
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && inWord == 0)
        {
            words++;
            inWord = 1;
        }
        else if(str[i] == ' ')
        {
            inWord = 0;
        }
    }

    printf("Words = %d\n", words);

    return 0;
}