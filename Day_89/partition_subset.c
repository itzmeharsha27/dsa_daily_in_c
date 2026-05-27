#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,5,11,5};
    int n = 4;

    int sum = 0;

    for(int i=0;i<n;i++)
        sum += arr[i];

    if(sum % 2 != 0)
    {
        printf("Not Possible\n");
        return 0;
    }

    int target = sum / 2;

    return 0;
}