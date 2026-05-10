#include <stdio.h>
#include <string.h>

// Longest Substring Without Repeating Characters

#define MAX 256

int main()
{
    char s[] = "abcabcbb";

    int freq[MAX] = {0};
    int l = 0, maxLen = 0;

    // Sliding window
    for(int r=0; s[r]; r++)
    {
        freq[s[r]]++;

        // Remove duplicates
        while(freq[s[r]] > 1)
        {
            freq[s[l]]--;
            l++;
        }

        int len = r - l + 1;

        if(len > maxLen)
            maxLen = len;
    }

    printf("Longest Unique Substring Length: %d\n", maxLen);

    return 0;
}