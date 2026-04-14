#include <stdio.h>

// Recursive function to generate subsets
void subsets(char str[], char result[], int i, int j)
{
    if(str[i] == '\0')
    {
        result[j] = '\0';
        printf("%s\n", result);
        return;
    }

    // Include
    result[j] = str[i];
    subsets(str, result, i+1, j+1);

    // Exclude
    subsets(str, result, i+1, j);
}

int main()
{
    char str[100];
    char result[100];

    printf("Enter a string: ");
    scanf("%s", str);

    subsets(str, result, 0, 0);

    return 0;
}