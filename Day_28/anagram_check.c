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

    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }

    // Count frequency of first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
    }

    return 0;
}