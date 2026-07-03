#include <stdio.h>

// Container With Most Water using Two Pointers

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    // Sample input
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);

    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    // Traverse from both ends
    while(left < right)
    {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        int area = width * currentHeight;

        // Update maximum area
        if(area > maxArea)
            maxArea = area;

        // Move the pointer with smaller height
        if(height[left] < height[right])
            left++;
        else
            right--;
    }

    printf("Maximum Water Area = %d\n", maxArea);

    return 0;
}