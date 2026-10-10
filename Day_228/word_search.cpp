#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> board = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
};

string word = "ABCCED";

bool dfs(int r, int c, int index) {
    if (index == word.size())
        return true;

    if (r < 0 || r >= board.size() ||
        c < 0 || c >= board[0].size() ||
        board[r][c] != word[index])
        return false;

    return dfs(r, c + 1, index + 1) ||
           dfs(r + 1, c, index + 1) ||
           dfs(r, c - 1, index + 1) ||
           dfs(r - 1, c, index + 1);
}

int main() {
    cout << dfs(0, 0, 0);

    return 0;
}