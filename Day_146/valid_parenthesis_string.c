#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "(*))";

    int low = 0;
    int high = 0;
    int n = strlen(str);
    int valid = 1;

    for(int i = 0; i < n; i++)
    {
        if(str[i] == '(')
        {
            low++;
            high++;
        }
        else if(str[i] == ')')
        {
            low--;
            high--;
        }
        else
        {
            low--;
            high++;
        }

        if(low < 0)
            low = 0;

        if(high < 0)
        {
            valid = 0;
            break;
        }
    }

    return 0;
}