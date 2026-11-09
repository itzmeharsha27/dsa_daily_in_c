#include <vector>
#include <string>
using namespace std;

class Solution {
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    bool dfs(vector<vector<char>>& board,
             string& word,
             int r, int c,
             int index) {

        if (index == word.size())
            return true;

        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return false;

        if (board[r][c] != word[index])
            return false;

        char original = board[r][c];
        board[r][c] = '#';

        for (int i = 0; i < 4; i++) {
            int nr = r + directions[i];
            int nc = c + directions[i + 1];

            if (dfs(board, word, nr, nc, index + 1)) {
                board[r][c] = original;
                return true;
            }
        }

        board[r][c] = original;
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty())
            return false;

        rows = board.size();
        cols = board[0].size();

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (board[r][c] == word[0] &&
                    dfs(board, word, r, c, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};