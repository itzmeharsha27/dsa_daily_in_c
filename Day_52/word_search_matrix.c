#include <stdio.h>

int search(char grid[10][10], int n, int m, char word[], int i, int j, int k);

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

    return 0;
}

int search(char grid[10][10], int n, int m, char word[], int i, int j, int k)
{
    return 0;
}