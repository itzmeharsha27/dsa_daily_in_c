#include <stdio.h>

int search(char grid[10][10], int n, int m, char word[], int i, int j, int k)
{
    if(word[k] == '\0')
        return 1;

    if(i<0 || j<0 || i>=n || j>=m || grid[i][j] != word[k])
        return 0;

    char temp = grid[i][j];
    grid[i][j] = '#';

    int res = search(grid,n,m,word,i+1,j,k+1) ||
              search(grid,n,m,word,i-1,j,k+1) ||
              search(grid,n,m,word,i,j+1,k+1) ||
              search(grid,n,m,word,i,j-1,k+1);

    grid[i][j] = temp;

    return res;
}

int main()
{
    int n, m;
    char grid[10][10], word[100];

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    printf("Enter grid:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %c",&grid[i][j]);

    printf("Enter word: ");
    scanf("%s", word);

    printf("Grid size = %d x %d\n", n, m);

    int found = 0;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(search(grid,n,m,word,i,j,0))
                found = 1;

    if(found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}