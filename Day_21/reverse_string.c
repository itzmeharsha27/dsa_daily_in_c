#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i;

for(i = 0; str[i] != '\0'; i++)
{
  
    if(str[i-1] == '\n')
{
    str[i-1] = '\0';
    i--;
}
}

    return 0;
}