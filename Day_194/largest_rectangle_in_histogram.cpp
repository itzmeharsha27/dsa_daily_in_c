#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        vector<int> h = heights;
        h.push_back(0);

        stack<int> st;
        int maxArea = 0;

        for (int i = 0; i < h.size(); i++) {

            while (!st.empty() && h[i] < h[st.top()]) {

                int height = h[st.top()];
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

    vector<int> heights = {2, 4, 6, 8};

    cout << s.largestRectangleArea(heights);

    return 0;
}