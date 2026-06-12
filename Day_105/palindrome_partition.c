#include <stdio.h>
#include <string.h>

#define MAX 100

int isPalindrome(char s[], int i, int j)
{
    while(i < j)
    {
        if(s[i] != s[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main()
{
    char s[] = "aab";

    int dp[MAX][MAX] = {0};
    int n = strlen(s);

    for(int len=2; len<=n; len++)
    {
    }

    return 0;
}