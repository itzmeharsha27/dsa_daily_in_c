#include <stdio.h>

int main() {

    int n,i,j,temp;
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

    // Bubble Sort algorithm
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}