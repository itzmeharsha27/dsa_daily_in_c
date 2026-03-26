#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    return 0;
}