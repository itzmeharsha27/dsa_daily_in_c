#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };

    int row = 1, col = 1;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int r = row + dr[i];
        int c = col + dc[i];

        if (r >= 0 && r < board.size() &&
            c >= 0 && c < board[0].size()) {
            cout << board[r][c] << " ";
        }
    }

    return 0;
}