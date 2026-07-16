#include <stdio.h>
#include <string.h>

// Partition Labels using Greedy Algorithm

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    char str[]="ababcbacadefegdehijhklij";
    int last[26];
    int n=strlen(str);

    // Store last occurrence of every character
    for(int i=0;i<n;i++)
        last[str[i]-'a']=i;

    int start=0;
    int end=0;

    printf("Partition Sizes: ");

    // Form partitions greedily
    for(int i=0;i<n;i++)
    {
        end=max(end,last[str[i]-'a']);

        if(i==end)
        {
            printf("%d ",end-start+1);
            start=i+1;
        }
    }

    printf("\n");

    return 0;
}