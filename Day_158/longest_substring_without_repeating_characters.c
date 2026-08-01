#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="abcabcbb";

    int freq[256]={0};
    int left=0,right=0;

    while(right<strlen(s))
    {
        freq[(int)s[right]]++;
        right++;
    }

    return 0;
}