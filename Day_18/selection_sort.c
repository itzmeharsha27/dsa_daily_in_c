#include <stdio.h>

int main()
{
    int n,i,j,min,temp;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    if(n<=0 || n>100)
    {
        printf("Invalid array size\n");
        return 0;
    }

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

    // Selection Sort Algorithm
    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("\nSorted array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}