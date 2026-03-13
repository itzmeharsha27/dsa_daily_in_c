#include <stdio.h>

int main() {

    int n,i,key,found=0;   // n = number of elements, i = loop variable, key = element to search, found = flag
    int arr[100];          // array to store maximum 100 elements

    printf("Enter number of elements: ");
    scanf("%d",&n);        // reading number of elements

    if(n<=0 || n>100)      // checking if array size is valid
    {
        printf("Invalid array size\n");
        return 0;          // stop program if size is invalid
    }

    printf("Enter elements:\n");

    for(i=0;i<n;i++)       // loop to take array elements from user
    {
        scanf("%d",&arr[i]);  // storing each element in array
    }

    printf("Enter element to search: ");
    scanf("%d",&key);      // reading element to be searched

    for(i=0;i<n;i++)       // loop to check each element in array
    {
        if(arr[i]==key)    // comparing array element with key
        {
            printf("Element found at position %d\n",i+1); // printing position
            found=1;       // setting found flag to true
        }
    }

    if(found==0)           // if element was not found in array
    {
        printf("Element not found\n");
    }

    return 0;              // end of program
}