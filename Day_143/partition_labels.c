#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "ababcbacadefegdehijhklij";
    int last[26];
    int n = strlen(str);

    for(int i=0;i<n;i++)
        last[str[i]-'a']=i;

    return 0;
}