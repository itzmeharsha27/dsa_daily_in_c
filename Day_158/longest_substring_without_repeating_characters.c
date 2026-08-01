#include <stdio.h>
#include <string.h>

// Sliding Window Approach

int main()
{
    char s[]="abcabcbb";

    int freq[256]={0};
    int left=0,right=0,maxLen=0;

    while(right<strlen(s))
    {
        freq[(int)s[right]]++;

        while(freq[(int)s[right]]>1)
        {
            freq[(int)s[left]]--;
            left++;
        }

        if(right-left+1>maxLen)
            maxLen=right-left+1;

        right++;
    }

    printf("Longest Length = %d\n",maxLen);

    return 0;
}