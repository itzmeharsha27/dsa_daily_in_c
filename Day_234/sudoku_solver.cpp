#include <iostream>
#include <vector>
using namespace std;

class Solution {
    bool isValid(vector<vector<char>>& board, int row, int col, char digit) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == digit || board[i][col] == digit)
                return false;
        }

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for (int r = startRow; r < startRow + 3; r++) {
            for (int c = startCol; c < startCol + 3; c++) {
                if (board[r][c] == digit)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] != '.')
                    continue;

                for (char digit = '1'; digit <= '9'; digit++) {
                    if (!isValid(board, row, col, digit))
                        continue;

                    board[row][col] = digit;

                    if (solve(board))
                        return true;

                    board[row][col] = '.';
                }

                return false;
            }
        }

        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution solution;
    solution.solveSudoku(board);

    for (const auto& row : board) {
        for (char cell : row)
            cout << cell << ' ';
        cout << '\n';
    }

    return 0;
}