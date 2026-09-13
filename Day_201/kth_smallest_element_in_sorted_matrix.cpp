#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8;
    vector<int> values;

    for (auto row : matrix)
        for (int x : row)
            values.push_back(x);

    sort(values.begin(), values.end());

    cout << values[k - 1];

    return 0;
}