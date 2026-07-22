#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int hand[]={1,2,3,6,2,3,4,7,8};
    int groupSize=3;
    int n=9;

    int used[100]={0};
    int possible=1;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(hand[i]>hand[j])
                swap(&hand[i],&hand[j]);

    for(int i=0;i<n;i++)
    {
    }

    return 0;
}