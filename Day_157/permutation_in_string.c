#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="ab";
    char s2[]="eidbaooo";

    int freq1[26]={0};
    int freq2[26]={0};

    for(int i=0;i<strlen(s1);i++)
        freq1[s1[i]-'a']++;

    return 0;
}