#include <bits/stdc++.h>
using namespace std;

vector<int> collide(vector<int>& asteroids) {
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

    vector<int> result;

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> asteroids = {5, 10, -5};

    vector<int> result = collide(asteroids);

    for (int x : result)
        cout << x << " ";

    return 0;
}