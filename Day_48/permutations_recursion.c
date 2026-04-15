#include <stdio.h>
#include <string.h>

void permute(char str[], int l, int r);

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    permute(str, 0, len - 1);

    return 0;
}

void permute(char str[], int l, int r)
{
    if(l == r)
    {
        printf("%s\n", str);
        return;
    }
}