#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n, -1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--) {
            int index = i % n;

            while (!st.empty() && st.top() <= nums[index])
                st.pop();

            if (i < n && !st.empty())
                result[index] = st.top();

            st.push(nums[index]);
        }

        return result;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1,2,1};

    vector<int> result = s.nextGreaterElements(nums);

    for (int x : result)
        cout << x << " ";

    return 0;
}