#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="ADOBECODEBANC";
    char t[]="ABC";

    int freq[256]={0};

    for(int i=0;t[i]!='\0';i++)
        freq[(int)t[i]]++;

    int left=0,right=0;

    return 0;
}