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

        // Find possible celebrity
        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }

        // Verify candidate
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
    Solution s({
        {1, 1, 0},
        {0, 1, 0},
        {1, 1, 1}
    });

    cout << s.findCelebrity(3);

    return 0;
}