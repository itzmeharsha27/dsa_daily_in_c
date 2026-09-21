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

    cout << "People: " << n << endl;

    return 0;
}