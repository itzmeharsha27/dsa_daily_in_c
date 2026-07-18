#include <stdio.h>

// Queue Reconstruction by Height using Greedy

void swap(int a[2],int b[2])
{
    int t;
    t=a[0]; a[0]=b[0]; b[0]=t;
    t=a[1]; a[1]=b[1]; b[1]=t;
}

int main()
{
    int people[][2]={{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    int n=6;

    int result[10][2];
    int size=0;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(people[i][0]<people[j][0] ||
              (people[i][0]==people[j][0]&&people[i][1]>people[j][1]))
                swap(people[i],people[j]);

    for(int i=0;i<n;i++)
    {
        for(int j=size;j>people[i][1];j--)
        {
            result[j][0]=result[j-1][0];
            result[j][1]=result[j-1][1];
        }

        result[people[i][1]][0]=people[i][0];
        result[people[i][1]][1]=people[i][1];
        size++;
    }

    printf("Reconstructed Queue:\n");
    for(int i=0;i<size;i++)
        printf("{%d,%d}\n",result[i][0],result[i][1]);

    return 0;
}