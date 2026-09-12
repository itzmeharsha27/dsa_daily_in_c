#include <bits/stdc++.h>
using namespace std;

double findMedian(vector<int>& nums1, vector<int>& nums2) {

    vector<int> nums;

    for (int x : nums1)
        nums.push_back(x);

    for (int x : nums2)
        nums.push_back(x);

    sort(nums.begin(), nums.end());

    int n = nums.size();

    if (n % 2 == 1)
        return nums[n / 2];

    return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    cout << findMedian(nums1, nums2);

    return 0;
}