#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> graph;

    Solution(vector<vector<int>> g) {
        graph = g;
    }

    bool knows(int a, int b) {
        return graph[a][b];
    }

    int findCelebrity(int n) {
        int candidate = 0;

        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }

        for (int i = 0; i < n; i++) {
            if (i == candidate)
                continue;

            if (knows(candidate, i) || !knows(i, candidate))
                return -1;
        }

        return candidate;
    }
};

int main() {
    Solution s1({
        {1, 1, 0},
        {0, 1, 0},
        {1, 1, 1}
    });

    Solution s2({
        {1, 1},
        {1, 1}
    });

    cout << s1.findCelebrity(3) << endl;
    cout << s2.findCelebrity(2) << endl;

    return 0;
}