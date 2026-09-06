#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {

            int current = (i == n) ? 0 : heights[i];

            while (!st.empty() && current < heights[st.top()]) {

                int height = heights[st.top()];
                st.pop();

                int width = st.empty()
                    ? i
                    : i - st.top() - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
};

int main() {
    Solution s;

    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << s.largestRectangleArea(heights) << endl;

    return 0;
}