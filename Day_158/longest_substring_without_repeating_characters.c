#include <stdio.h>
#include <string.h>

// Longest Substring Without Repeating Characters using Sliding Window

int main()
{
    char s[]="abcabcbb";

    int freq[256]={0};
    int left=0,right=0;
    int maxLen=0;

    // Traverse the string
    while(right<strlen(s))
    {
        freq[(int)s[right]]++;

        // Remove duplicate characters
        while(freq[(int)s[right]]>1)
        {
            freq[(int)s[left]]--;
            left++;
        }

        // Update longest length
        if(right-left+1>maxLen)
            maxLen=right-left+1;

        right++;
    }

    printf("Longest Substring Length = %d\n",maxLen);

    return 0;
}