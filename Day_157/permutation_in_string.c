#include <stdio.h>
#include <string.h>

int check(int a[],int b[])
{
    for(int i=0;i<26;i++)
        if(a[i]!=b[i])
            return 0;
    return 1;
}

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

    if(check(freq1,freq2))
        printf("True\n");

    return 0;
}