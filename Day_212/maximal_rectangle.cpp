#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    cout << "Matrix:" << endl;

    for (auto row : matrix) {
        for (char x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}