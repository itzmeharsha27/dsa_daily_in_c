#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

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
        if(str[i] != ' ' && (i == 0 || str[i-1] == ' '))
        {
            words++;
        }
    }

    return 0;
}