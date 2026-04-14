#include <stdio.h>

// Function to generate all subsets using recursion
void subsets(char str[], char result[], int i, int j)
{
    // Base case
    if(str[i] == '\0')
    {
        result[j] = '\0';
        printf("%s\n", result);
        return;
    }

    // Include current character
    result[j] = str[i];
    subsets(str, result, i+1, j+1);

    // Exclude current character
    subsets(str, result, i+1, j);
}

int main()
{
    char str[100];
    char result[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(str[0] == '\0')
    {
        printf("Invalid input\n");
        return 0;
    }

    subsets(str, result, 0, 0);

    return 0;
}