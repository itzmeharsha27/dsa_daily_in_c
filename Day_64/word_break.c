#include <stdio.h>
#include <string.h>

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

int main()
{
    char str[] = "applepenapple";
    char dict[2][20] = {"apple","pen"};

    if(wordBreak(str, dict, 2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}