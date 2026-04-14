#include <stdio.h>

void subsets(char str[], char result[], int i, int j);

int main()
{
    char str[100];
    char result[100];

    printf("Enter a string: ");
    scanf("%s", str);

    subsets(str, result, 0, 0);

    return 0;
}

void subsets(char str[], char result[], int i, int j)
{

}