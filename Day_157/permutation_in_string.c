#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="ab";
    char s2[]="eidbaooo";

    int freq1[26]={0};
    int freq2[26]={0};

    int len=strlen(s1);

    for(int i=0;i<len;i++)
    {
        freq1[s1[i]-'a']++;
        freq2[s2[i]-'a']++;
    }

    return 0;
}