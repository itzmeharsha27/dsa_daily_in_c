#include <stdio.h>

int main()
{
    int matrix[4][5] = {
        {1,0,1,0,0},
        {1,0,1,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0}
    };

    int rows = 4, cols = 5;

    int height[5] = {0};

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }
    }

    return 0;
}