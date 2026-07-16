#include <stdio.h>
#include <string.h>

// Partition Labels

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    char str[]="ababcbacadefegdehijhklij";
    int last[26];
    int n=strlen(str);

    for(int i=0;i<n;i++)
        last[str[i]-'a']=i;

    int start=0,end=0;

    for(int i=0;i<n;i++)
    {
        end=max(end,last[str[i]-'a']);

        if(i==end)
        {
            printf("%d ",end-start+1);
            start=i+1;
        }
    }

    return 0;
}