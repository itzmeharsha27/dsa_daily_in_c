#include <stdio.h>

int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=9;

    int left=0;
    int right=n-1;
    int maxArea=0;

    while(left<right)
    {
        int h;

        if(height[left]<height[right])
            h=height[left];
        else
            h=height[right];

        int area=h*(right-left);

        if(area>maxArea)
            maxArea=area;

        if(height[left]<height[right])
            left++;
        else
            right--;
    }

    return 0;
}