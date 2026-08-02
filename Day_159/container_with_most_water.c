#include <stdio.h>

// Container With Most Water using Two Pointer Technique

int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);

    int left=0;
    int right=n-1;
    int maxArea=0;

    // Traverse from both ends
    while(left<right)
    {
        int h=(height[left]<height[right])?height[left]:height[right];
        int area=h*(right-left);

        if(area>maxArea)
            maxArea=area;

        // Move the pointer with smaller height
        if(height[left]<height[right])
            left++;
        else
            right--;
    }

    printf("Maximum Water = %d\n",maxArea);

    return 0;
}