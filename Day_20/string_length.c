#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {

    }

    printf("Length = %d\n", i);

    fgets(str, sizeof(str), stdin);

    return 0;
}