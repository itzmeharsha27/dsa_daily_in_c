#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> asteroids = {5, 10, -5};
    stack<int> st;

    for (int asteroid : asteroids) {
        bool destroyed = false;

        while (!st.empty() && st.top() > 0 && asteroid < 0) {
            if (st.top() < abs(asteroid)) {
                st.pop();
            } else if (st.top() == abs(asteroid)) {
                st.pop();
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        }

        if (!destroyed)
            st.push(asteroid);
    }

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}