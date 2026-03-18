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

    if(str[i-1] == '\n')
{
    str[i-1] = '\0';
    i--;
}

if(str[0] == '\0')
{
    printf("Empty string\n");
    return 0;
}

// Traverse string until null character
for(i = 0; str[i] != '\0'; i++)
{

}

    return 0;
}