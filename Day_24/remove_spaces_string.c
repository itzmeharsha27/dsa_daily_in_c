#include <stdio.h>

int main()
{
    char str[200];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check empty input
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

    // Remove spaces by shifting characters
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            for(j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1];
            }
            i--;
        }
    }

    printf("String without spaces: %s\n", str);

    return 0;
}