#include <stdio.h>

int main()
{
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;

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