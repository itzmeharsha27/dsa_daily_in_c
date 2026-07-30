#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="AABABBA";
    int k=1;

    int freq[26]={0};
    int left=0,right=0;

    while(right<strlen(s))
    {
        freq[s[right]-'A']++;
        right++;
    }

    return 0;
}