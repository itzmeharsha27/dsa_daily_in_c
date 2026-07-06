#include <stdio.h>

#define ROWS 4
#define COLS 5

int histogram[COLS] = {0};

int main()
{
    int matrix[ROWS][COLS] = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            if(matrix[i][j]==1)
                histogram[j]++;
            else
                histogram[j]=0;
        }
    }

    return 0;
}