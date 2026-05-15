#include <stdio.h>

int main()
{
    int arr[] = {1,1};
    int n = 2;

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