#include <stdio.h>

int main()
{
    char str[200];
    int i, j;


    for(i = 0; str[i] != '\0'; i++)
{
    if(str[i] == '\n')
    {
        str[i] = '\0';
        break;
    }
}

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    return 0;
}