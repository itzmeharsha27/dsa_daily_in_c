git add .
git commit -m "added array declaration"#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int j,key;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");

for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}