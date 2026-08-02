#include <stdio.h>

int main()
{
    int height[]={2,3,4,5,18,17,6};
    int n=7;

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