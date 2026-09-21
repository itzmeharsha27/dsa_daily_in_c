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

int main() {
    int n = 3;

    for (int candidate = 0; candidate < n; candidate++) {
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (i == candidate)
                continue;

            if (knows(candidate, i) || !knows(i, candidate)) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Celebrity: " << candidate << endl;
            return 0;
        }
    }

    cout << "No celebrity" << endl;

    return 0;
}