#include <stdio.h>

void removeDup(char str[], int index);

int visited[256] = {0};

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeDup(str, 0);

    return 0;
}

void removeDup(char str[], int index)
{
    if(str[index] == '\0')
        return;

    if(visited[str[index]] == 0)
    {
        printf("%c", str[index]);
        visited[str[index]] = 1;
    }

    removeDup(str, index + 1);
}