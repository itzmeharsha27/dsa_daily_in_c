#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool dfs(vector<vector<char>>& board, string& word,
         int r, int c, int index) {
    if (index == word.size())
        return true;

    if (r < 0 || c < 0 || r >= board.size() ||
        c >= board[0].size() || board[r][c] != word[index])
        return false;

    char saved = board[r][c];
    board[r][c] = '#';

    bool found = dfs(board, word, r + 1, c, index + 1) ||
                 dfs(board, word, r - 1, c, index + 1) ||
                 dfs(board, word, r, c + 1, index + 1) ||
                 dfs(board, word, r, c - 1, index + 1);

    board[r][c] = saved;
    return found;
}

int main() {
    vector<vector<char>> board = {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}
    };

    string word = "oath";
    bool found = false;

    for (int r = 0; r < board.size(); r++)
        for (int c = 0; c < board[0].size(); c++)
            if (dfs(board, word, r, c, 0))
                found = true;

    cout << boolalpha << found << '\n';
    return 0;
}