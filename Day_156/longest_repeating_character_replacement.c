#include <stdio.h>
#include <string.h>

// Longest Repeating Character Replacement using Sliding Window

int main()
{
    char s[]="AABABBA";
    int k=1;

    int freq[26]={0};
    int left=0,right=0;
    int maxFreq=0,maxLen=0;

    while(right<strlen(s))
    {
        freq[s[right]-'A']++;

        if(freq[s[right]-'A']>maxFreq)
            maxFreq=freq[s[right]-'A'];

        if((right-left+1)-maxFreq>k)
        {
            freq[s[left]-'A']--;
            left++;
        }

        if(right-left+1>maxLen)
            maxLen=right-left+1;

        right++;
    }

    printf("Longest Repeating Character Replacement Length = %d\n",maxLen);

    return 0;
}