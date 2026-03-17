#include <stdio.h>

int main()
{
    int n,i,j,key;
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

    // Insertion Sort Algorithm
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;

        // Shift elements greater than key
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        // Insert element at correct position
        arr[j+1] = key;
    }

    printf("\nSorted array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}