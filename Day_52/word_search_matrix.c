#include <stdio.h>

// Backtracking function to search word
int search(char grid[10][10], int n, int m, char word[], int i, int j, int k)
{
    // If word completely matched
    if(word[k] == '\0')
        return 1;

    // Boundary + mismatch check
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j] != word[k])
        return 0;

    char temp = grid[i][j];
    grid[i][j] = '#'; // mark visited

    // Explore 4 directions
    int res = search(grid,n,m,word,i+1,j,k+1) ||
              search(grid,n,m,word,i-1,j,k+1) ||
              search(grid,n,m,word,i,j+1,k+1) ||
              search(grid,n,m,word,i,j-1,k+1);

    grid[i][j] = temp; // backtrack

    return res;
}

int main()
{
    int n, m;
    char grid[10][10], word[100];

    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);

    // Validate input
    if(n<=0 || m<=0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter grid:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %c",&grid[i][j]);

    printf("Enter word: ");
    scanf("%s", word);

    int found = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(search(grid,n,m,word,i,j,0))
            {
                found = 1;
                break;
            }
        }
    }

    if(found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}