#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[] = "aab";
    int n = strlen(s);

    int isPal[MAX][MAX] = {0};

    for(int i=0;i<n;i++)
        isPal[i][i] = 1;

    for(int len=2; len<=n; len++)
    {
    }

    return 0;
}