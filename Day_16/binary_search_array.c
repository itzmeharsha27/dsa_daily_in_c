#include <stdio.h>

int main() {
    int low=0,high=n-1,mid;
    int n,i,key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   while(low<=high)
{
    mid=(low+high)/2;
}
    printf("Enter element to search: ");
    scanf("%d",&key);
    if(arr[mid]==key)
{
    printf("Element found\n");
}
else if(arr[mid]<key)
{
    low=mid+1;
}
else
{
    high=mid-1;
}
if(arr[mid]==key)
{
    printf("Element found at position %d\n",mid+1);
}
    return 0;
}