#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int value = 12;
    int count = 0;

    for (auto row : matrix) {
        for (int x : row) {
            if (x <= value)
                count++;
        }
    }

    cout << count;

    return 0;
}