#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int leftMax = 0;
        int rightMax = 0;
        int total = 0;

        while (left < right) {
            if (height[left] <= height[right]) {
                leftMax = max(leftMax, height[left]);
                total += leftMax - height[left];
                left++;
            } else {
                rightMax = max(rightMax, height[right]);
                total += rightMax - height[right];
                right--;
            }
        }

        return total;
    }
};

int main() {
    Solution s;

    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> b = {4,2,0,3,2,5};
    vector<int> c = {1,2,3,4};

    cout << s.trap(a) << endl;
    cout << s.trap(b) << endl;
    cout << s.trap(c) << endl;

    return 0;
}