#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangle(vector<int>& height) {
        stack<int> st;
        int best = 0;

        for (int i = 0; i <= height.size(); i++) {
            int current = (i == height.size()) ? 0 : height[i];

            while (!st.empty() && height[st.top()] > current) {
                int h = height[st.top()];
                st.pop();

                int width = st.empty() ? i : i - st.top() - 1;

                best = max(best, h * width);
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
            for (int c = 0; c < cols; c++) {
                if (row[c] == '1')
                    height[c]++;
                else
                    height[c] = 0;
            }

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