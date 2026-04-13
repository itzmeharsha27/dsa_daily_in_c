#include <stdio.h>

// Array to track visited characters (ASCII)
int visited[256] = {0};

// Function to remove duplicate characters using recursion
void removeDup(char str[], int index)
{
    // Base case
    if(str[index] == '\0')
        return;

    // If character not seen before
    if(visited[str[index]] == 0)
    {
        printf("%c", str[index]);
        visited[str[index]] = 1;
    }

    // Recursive call
    removeDup(str,  index + 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    // Validate input
    if(str[0] == '\0')
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Result: ");
    removeDup(str, 0);

    return 0;
}