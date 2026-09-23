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

    vector<int> a = {1,2,1};
    vector<int> b = {1,2,3,4,3};
    vector<int> c = {5,4,3,2,1};

    for (int x : s.nextGreaterElements(a))
        cout << x << " ";
    cout << endl;

    for (int x : s.nextGreaterElements(b))
        cout << x << " ";
    cout << endl;

    for (int x : s.nextGreaterElements(c))
        cout << x << " ";
    cout << endl;

    return 0;
}