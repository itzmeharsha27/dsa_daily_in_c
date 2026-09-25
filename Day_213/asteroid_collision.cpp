#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
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
};

void print(vector<int> result) {
    for (int x : result)
        cout << x << " ";
    cout << endl;
}

int main() {
    Solution s;

    vector<int> a = {5, 10, -5};
    vector<int> b = {8, -8};
    vector<int> c = {10, 2, -5};
    vector<int> d = {-2, -1, 1, 2};

    print(s.asteroidCollision(a));
    print(s.asteroidCollision(b));
    print(s.asteroidCollision(c));
    print(s.asteroidCollision(d));

    return 0;
}