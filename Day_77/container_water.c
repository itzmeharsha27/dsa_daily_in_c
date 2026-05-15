#include <stdio.h>

int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int l = 0, r = n-1;
    int maxArea = 0;

    while(l < r)
    {
        int height = arr[l] < arr[r] ? arr[l] : arr[r];
        int width = r - l;
        int area = height * width;

        if(area > maxArea)
            maxArea = area;

        if(arr[l] < arr[r])
            l++;
        else
            r--;
    }

    printf("Max Area: %d\n", maxArea);

    return 0;
}