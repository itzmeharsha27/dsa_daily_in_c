#include <stdio.h>

int main()
{
    int arr[] = {4,2,0,3,2,5};
    int n = 6;

    int l = 0, r = n-1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while(l < r)
    {
        if(arr[l] < arr[r])
        {
            if(arr[l] >= leftMax)
                leftMax = arr[l];
            else
                water += leftMax - arr[l];

            l++;
        }
        else
        {
            if(arr[r] >= rightMax)
                rightMax = arr[r];
            else
                water += rightMax - arr[r];

            r--;
        }
    }

    printf("Water Trapped: %d\n", water);

    return 0;
}