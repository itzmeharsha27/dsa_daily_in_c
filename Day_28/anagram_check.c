#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;
    int freq[256] = {0};
    int isAnagram = 1;

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

    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[str2[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
// Added comments version