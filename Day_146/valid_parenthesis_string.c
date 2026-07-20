#include <stdio.h>
#include <string.h>

// Valid Parenthesis String using Greedy Algorithm

int main()
{
    char str[] = "(*))";
    int n = strlen(str);

    int low = 0;
    int high = 0;
    int valid = 1;

    // Traverse the string
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
            // '*' can act as '(' or ')' or empty
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

    if(valid && low == 0)
        printf("Valid Parenthesis String\n");
    else
        printf("Invalid Parenthesis String\n");

    return 0;
}