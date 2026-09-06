#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    stack<int> st;

    for (int i = 0; i < heights.size(); i++) {

        while (!st.empty() && heights[i] < heights[st.top()])
            st.pop();

        st.push(i);
    }

    cout << "Monotonic stack created";

    return 0;
}