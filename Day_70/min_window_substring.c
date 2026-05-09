#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    char s[] = "ADOBECODEBANC";
    char t[] = "ABC";

    int freqT[MAX]={0}, freqS[MAX]={0};
    int required=strlen(t), formed=0;

    for(int i=0;t[i];i++)
        freqT[t[i]]++;

    int l=0;

    for(int r=0;s[r];r++)
    {
        freqS[s[r]]++;

        if(freqS[s[r]] <= freqT[s[r]])
            formed++;
    }

    return 0;
}