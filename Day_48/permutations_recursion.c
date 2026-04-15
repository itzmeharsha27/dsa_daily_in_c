#include <stdio.h>
#include <string.h>

// Function to generate permutations using recursion
void permute(char str[], int l, int r)
{
    if(l == r)
    {
        printf("%s\n", str);
        return;
    }

    int i;
    for(i = l; i <= r; i++)
    {
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;

        permute(str, l + 1, r);

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

    if(len <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("First char = %c\n", str[0]);

    permute(str, 0, len - 1);

    return 0;
}