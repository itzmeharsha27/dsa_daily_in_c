#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    vector<int> merged;

    for (int x : nums1)
        merged.push_back(x);

    for (int x : nums2)
        merged.push_back(x);

    sort(merged.begin(), merged.end());

    for (int x : merged)
        cout << x << " ";

    return 0;#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};

    int n = nums.size();

    double median = nums[n / 2];

    cout << median;

    return 0;
}
}