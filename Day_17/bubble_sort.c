#include <stdio.h>

int main() {

    int n,i;
    int arr[100];
    int j,temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
  printf("\nSorted array:\n");

for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
for(j=0;j<n-i-1;j++)
{

}
if(n<=0 || n>100)
{
    printf("Invalid array size\n");
    return 0;
}
if(arr[j] > arr[j+1])
{
    temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;

}

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