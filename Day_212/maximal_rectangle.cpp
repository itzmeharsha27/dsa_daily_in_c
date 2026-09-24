#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> height(cols, 0);

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (matrix[r][c] == '1')
                height[c]++;
            else
                height[c] = 0;
        }

        for (int x : height)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}