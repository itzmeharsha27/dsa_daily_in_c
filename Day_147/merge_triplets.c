#include <stdio.h>

int main()
{
    int triplets[][3]={{2,5,3},{2,7,5},{1,6,4}};
    int target[]={2,7,5};
    int n=3;

    int foundA=0,foundB=0,foundC=0;

    for(int i=0;i<n;i++)
    {
        if(triplets[i][0]<=target[0] &&
           triplets[i][1]<=target[1] &&
           triplets[i][2]<=target[2])
        {
            if(triplets[i][0]==target[0]) foundA=1;
            if(triplets[i][1]==target[1]) foundB=1;
            if(triplets[i][2]==target[2]) foundC=1;
        }
    }

    if(foundA&&foundB&&foundC)
        printf("Possible\n");
    else
        printf("Not Possible\n");

    return 0;
}