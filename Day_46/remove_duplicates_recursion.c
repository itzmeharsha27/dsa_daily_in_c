#include <stdio.h>

// Array to track visited characters
int visited[256] = {0};

// Recursive function
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

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(str[0] == '\0')
    {
        printf("Invalid input\n");
        return 0;
    }

    removeDup(str, 0);

    return 0;
}