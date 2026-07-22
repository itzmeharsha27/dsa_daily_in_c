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
        if(used[i])
            continue;

        int need=hand[i]+1;
        used[i]=1;

        for(int count=1;count<groupSize;count++)
        {
            int found=0;

            for(int j=0;j<n;j++)
            {
                if(!used[j] && hand[j]==need)
                {
                    used[j]=1;
                    need++;
                    found=1;
                    break;
                }
            }

            if(!found)
            {
                possible=0;
                break;
            }
        }

        if(!possible)
            break;
    }

    if(possible)
        printf("Possible\n");
    else
        printf("Not Possible\n");

    return 0;
}