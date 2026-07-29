#include <stdio.h>
#include <string.h>

// Minimum Window Substring

int main()
{
    char s[]="ADOBECODEBANC";
    char t[]="ABC";

    int freq[256]={0};

    for(int i=0;t[i]!='\0';i++)
        freq[(int)t[i]]++;

    int left=0,right=0;
    int count=strlen(t);

    while(s[right]!='\0')
    {
        if(freq[(int)s[right]]>0)
            count--;

        freq[(int)s[right]]--;

        right++;
    }

    return 0;
}