#include <stdio.h>
#include <string.h>

// Function to generate all permutations using recursion (backtracking)
void permute(char str[], int l, int r)
{
    // Base case
    if(l == r)
    {
        printf("%s\n", str);
        return;
    }

    int i;
    for(i = l; i <= r; i++)
    {
        // Swap characters
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;

        // Recursive call
        permute(str, l + 1, r);

        // Backtrack (restore original string)
        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }
}

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Validate input
    if(len <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    permute(str, 0, len - 1);

    return 0;
}