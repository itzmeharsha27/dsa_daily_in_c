#include <vector>
#include <string>
using namespace std;

class Solution {
    struct TrieNode {
        TrieNode* children[26];
        string word;

        TrieNode() {
            word = "";
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root = new TrieNode();
    int rows, cols;
    int directions[5] = {-1, 0, 1, 0, -1};

    void insert(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];
        }

        node->word = word;
    }

    void dfs(vector<vector<char>>& board,
             int r, int c,
             TrieNode* node,
             vector<string>& answer) {

        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return;

        char ch = board[r][c];

        if (ch == '#')
            return;

        int index = ch - 'a';

        if (!node->children[index])
            return;

        node = node->children[index];

        if (!node->word.empty()) {
            answer.push_back(node->word);
            node->word = "";
        }

        board[r][c] = '#';

        for (int i = 0; i < 4; i++) {
            dfs(board,
                r + directions[i],
                c + directions[i + 1],
                node,
                answer);
        }

        board[r][c] = ch;
    }

public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {

        rows = board.size();
        cols = board[0].size();

        for (string word : words)
            insert(word);

        vector<string> answer;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                dfs(board, r, c, root, answer);
            }
        }

        return answer;
    }
};