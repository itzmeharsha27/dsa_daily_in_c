git add .
git commit -m "added array declaration"#include <stdio.h>

int main()
{
    int n,i;
    int arr[100];
    int j,key;

    key = arr[i];
j = i-1;

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
for(i=1;i<n;i++)
{

}
while(j>=0 && arr[j] > key)
{
    arr[j+1] = arr[j];
    j--;
}

    return 0;
}