#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int left = 0;
    int right = height.size() - 1;

    int leftMax = 0;
    int rightMax = 0;
    int total = 0;

    while (left < right) {
        if (height[left] <= height[right]) {
            leftMax = max(leftMax, height[left]);
            left++;
        } else {
            rightMax = max(rightMax, height[right]);
            right--;
        }
    }

    cout << total;

    return 0;
}