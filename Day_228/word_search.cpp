#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    char target = 'A';

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (board[i][j] == target)
                cout << i << " " << j << endl;
        }
    }

    return 0;
}