#include <stdio.h>

int main()
{
    char str[200];
    int i, j;
    int freq[256] = {0};

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

    // Remove duplicates
    for(i = 0, j = 0; str[i] != '\0'; i++)
    {
        if(freq[str[i]] == 0)
        {
            freq[str[i]] = 1;
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing duplicates: %s\n", str);

    return 0;
}