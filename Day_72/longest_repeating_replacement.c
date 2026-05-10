#include <stdio.h>
#include <string.h>

#define MAX 26

int main()
{
    char s[] = "AABABBA";
    int k = 1;

    int freq[MAX] = {0};
    int l = 0, maxLen = 0;

    for(int r = 0; s[r]; r++)
    {
        freq[s[r]-'A']++;
    }

    return 0;
}