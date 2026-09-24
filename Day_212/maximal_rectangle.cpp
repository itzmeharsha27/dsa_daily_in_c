#include <bits/stdc++.h>
using namespace std;

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

int main() {
    vector<int> height = {2,1,5,6,2,3};

    cout << largestRectangle(height);

    return 0;
}