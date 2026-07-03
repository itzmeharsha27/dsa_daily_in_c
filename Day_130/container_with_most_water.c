#include <stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while(left < right)
    {
        int width = right - left;
        int area = width * min(height[left], height[right]);

        if(area > maxArea)
            maxArea = area;

        if(height[left] < height[right])
            left++;
        else
            right--;
    }

    printf("Maximum Area = %d\n", maxArea);

    return 0;
}