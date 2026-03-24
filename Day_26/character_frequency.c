#include <stdio.h>

int main()
{
    char str[200];
    int i;
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

    // Count frequency of characters
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    printf("Character Frequencies:\n");

    // Display results
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}