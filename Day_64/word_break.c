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

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(dp[j])
            {
                char sub[100];
                strncpy(sub, str+j, i-j);
                sub[i-j] = '\0';

                for(int k=0;k<size;k++)
                {
                    if(strcmp(sub, dict[k]) == 0)
                    {
                        dp[i] = 1;
                        break;
                    }
                }
            }
        }
    }

    return dp[n];
}