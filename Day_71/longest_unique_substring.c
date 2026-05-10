#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    char s[] = "abcabcbb";

    int freq[MAX] = {0};
    int l = 0, maxLen = 0;

    for(int r=0; s[r]; r++)
    {
        freq[s[r]]++;

        while(freq[s[r]] > 1)
        {
            freq[s[l]]--;
            l++;
        }
    }

    return 0;
}