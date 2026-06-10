#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[] = "baaabab";
    char p[] = "ba*a?";

    int dp[MAX][MAX] = {0};

    int n = strlen(s);
    int m = strlen(p);

    return 0;
}