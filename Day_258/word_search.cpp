#include <vector>
#include <string>
using namespace std;

class Solution {
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    bool dfs(vector<vector<char>>& board, string& word,
             int r, int c, int index) {

        if (index == word.size())
            return true;

        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return false;

        if (board[r][c] != word[index])
            return false;

        for (int i = 0; i < 4; i++) {
            int nr = r + directions[i];
            int nc = c + directions[i + 1];

            if (dfs(board, word, nr, nc, index + 1))
                return true;
        }

        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        return dfs(board, word, 0, 0, 0);
    }
};