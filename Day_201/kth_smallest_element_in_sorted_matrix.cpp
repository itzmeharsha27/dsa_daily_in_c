#include <bits/stdc++.h>
using namespace std;

int countLessEqual(vector<int>& row, int value) {
    return upper_bound(row.begin(), row.end(), value) - row.begin();
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int value = 12;
    int count = 0;

    for (auto& row : matrix)
        count += countLessEqual(row, value);

    cout << count;

    return 0;
}