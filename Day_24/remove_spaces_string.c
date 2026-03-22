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

for(i = 0; str[i] != '\0'; i++)
{
    if(str[i] == ' ')
    {
        
    }
}
for(j = i; str[j] != '\0'; j++)
{
    str[j] = str[j+1];
    i--;
    printf("String without spaces: %s\n", str);
}
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    return 0;
}