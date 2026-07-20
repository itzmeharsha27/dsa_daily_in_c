#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "(*))";

    int low = 0;
    int high = 0;
    int n = strlen(str);

    for(int i = 0; i < n; i++)
    {
        if(str[i] == '(')
        {
            low++;
            high++;
        }
    }

    return 0;
}