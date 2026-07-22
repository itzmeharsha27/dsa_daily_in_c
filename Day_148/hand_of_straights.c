#include <stdio.h>

// Hand of Straights using Greedy Algorithm

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int hand[]={1,2,3,6,2,3,4,7,8};
    int groupSize=3;
    int n=sizeof(hand)/sizeof(hand[0]);

    int used[100]={0};
    int possible=1;

    // Sort the cards
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(hand[i]>hand[j])
                swap(&hand[i],&hand[j]);

    // Form consecutive groups
    for(int i=0;i<n;i++)
    {
        if(used[i])
            continue;

        used[i]=1;
        int next=hand[i]+1;

        for(int count=1;count<groupSize;count++)
        {
            int found=0;

            for(int j=0;j<n;j++)
            {
                if(!used[j] && hand[j]==next)
                {
                    used[j]=1;
                    next++;
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
        printf("Possible to arrange cards into consecutive groups.\n");
    else
        printf("Not Possible to arrange cards into consecutive groups.\n");

    return 0;
}