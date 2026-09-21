#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph = {
    {1, 1, 0},
    {0, 1, 0},
    {1, 1, 1}
};

bool knows(int a, int b) {
    return graph[a][b];
}

bool isCelebrity(int candidate, int n) {
    for (int i = 0; i < n; i++) {
        if (i == candidate)
            continue;

        if (knows(candidate, i) || !knows(i, candidate))
            return false;
    }

    return true;
}

int main() {
    int n = 3;
    int candidate = 0;

    for (int i = 1; i < n; i++) {
        if (knows(candidate, i))
            candidate = i;
    }

    cout << (isCelebrity(candidate, n) ? candidate : -1);

    return 0;
}