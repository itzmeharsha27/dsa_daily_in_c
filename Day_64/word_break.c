#include <stdio.h>
#include <string.h>

int wordBreak(char str[], char dict[][20], int size);

int main()
{
    char str[100] = "leetcode";
    char dict[5][20] = {"leet","code"};

    printf("%d\n", wordBreak(str, dict, 2));

    return 0;
}

int wordBreak(char str[], char dict[][20], int size)
{
    int n = strlen(str);
    int dp[100] = {0};

    dp[0] = 1;
}