#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    // Remove newline from str2
    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    return 0;
}