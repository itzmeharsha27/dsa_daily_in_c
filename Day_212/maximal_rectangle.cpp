#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangle(vector<int>& h) {
        stack<int> st;
        int best = 0;

        for (int i = 0; i <= h.size(); i++) {
            int current = (i == h.size()) ? 0 : h[i];

            while (!st.empty() && h[st.top()] > current) {
                int height = h[st.top()];
                st.pop();

                int width = st.empty() ? i : i - st.top() - 1;

                best = max(best, height * width);
            }

            st.push(i);
        }

        return best;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty())
            return 0;

        int cols = matrix[0].size();
        vector<int> height(cols, 0);
        int answer = 0;

        for (auto& row : matrix) {
            for (int c = 0; c < cols; c++)
                height[c] = (row[c] == '1') ? height[c] + 1 : 0;

            answer = max(answer, largestRectangle(height));
        }

        return answer;
    }
};

int main() {
    Solution s;

    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    cout << s.maximalRectangle(matrix);

    return 0;
}