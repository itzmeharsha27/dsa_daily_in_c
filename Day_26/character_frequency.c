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

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    printf("Character Frequencies:\n");

    return 0;
}