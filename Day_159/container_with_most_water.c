#include <stdio.h>

// Container With Most Water using Two Pointers

int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);

    int left=0,right=n-1,maxArea=0;

    while(left<right)
    {
        int h=(height[left]<height[right])?height[left]:height[right];
        int area=h*(right-left);

        if(area>maxArea)
            maxArea=area;

        if(height[left]<height[right])
            left++;
        else
            right--;
    }

    printf("Maximum Area = %d\n",maxArea);

    return 0;
}