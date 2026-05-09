#include <stdio.h>
#include <string.h>

// Minimum Window Substring

#define MAX 256

int main()
{
    char s[]="ADOBECODEBANC";
    char t[]="ABC";

    int freqT[MAX]={0}, freqS[MAX]={0};
    int required=strlen(t), formed=0;

    // Count frequency of target
    for(int i=0;t[i];i++)
        freqT[t[i]]++;

    int l=0, minLen=1000, start=0;

    // Sliding window
    for(int r=0;s[r];r++)
    {
        freqS[s[r]]++;

        if(freqS[s[r]] <= freqT[s[r]])
            formed++;

        // Try to shrink window
        while(formed == required)
        {
            if(r-l+1 < minLen)
            {
                minLen = r-l+1;
                start = l;
            }

            freqS[s[l]]--;
            if(freqS[s[l]] < freqT[s[l]])
                formed--;

            l++;
        }
    }

    printf("Minimum Window: ");
    for(int i=start;i<start+minLen;i++)
        printf("%c", s[i]);

    return 0;
}