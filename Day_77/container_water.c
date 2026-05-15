#include <stdio.h>

// Container With Most Water using Two Pointers

int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int l = 0, r = n-1;
    int maxArea = 0;

    // Two pointer approach
    while(l < r)
    {
        int height = arr[l] < arr[r] ? arr[l] : arr[r];
        int width = r - l;
        int area = height * width;

        if(area > maxArea)
            maxArea = area;

        // Move smaller height pointer
        if(arr[l] < arr[r])
            l++;
        else
            r--;
    }

    printf("Maximum Water Stored: %d\n", maxArea);

    return 0;
}