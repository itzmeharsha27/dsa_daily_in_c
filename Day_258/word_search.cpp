#include <vector>
#include <string>
using namespace std;

class Solution {
    int rows, cols;

    bool dfs(vector<vector<char>>& board, string& word,
             int r, int c, int index) {
        if (index == word.size())
            return true;

        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return false;

        if (board[r][c] != word[index])
            return false;

        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        return false;
    }
};