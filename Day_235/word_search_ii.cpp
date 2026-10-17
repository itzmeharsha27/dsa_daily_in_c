#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    string word;

    TrieNode() : word("") {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Solution {
    void insert(TrieNode* root, const string& word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];
        }

        node->word = word;
    }

    bool isEmpty(TrieNode* node) {
        if (!node->word.empty())
            return false;

        for (int i = 0; i < 26; i++)
            if (node->children[i])
                return false;

        return true;
    }

    void dfs(vector<vector<char>>& board, int r, int c,
             TrieNode* node, vector<string>& result) {
        if (r < 0 || c < 0 || r >= board.size() ||
            c >= board[0].size() || board[r][c] == '#')
            return;

        int index = board[r][c] - 'a';
        TrieNode* next = node->children[index];

        if (!next)
            return;

        if (!next->word.empty()) {
            result.push_back(next->word);
            next->word.clear();
        }

        char saved = board[r][c];
        board[r][c] = '#';

        dfs(board, r + 1, c, next, result);
        dfs(board, r - 1, c, next, result);
        dfs(board, r, c + 1, next, result);
        dfs(board, r, c - 1, next, result);

        board[r][c] = saved;

        if (isEmpty(next)) {
            delete next;
            node->children[index] = nullptr;
        }
    }

public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {
        vector<string> result;

        if (board.empty() || board[0].empty())
            return result;

        TrieNode* root = new TrieNode();

        for (const string& word : words)
            insert(root, word);

        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                dfs(board, r, c, root, result);
            }
        }

        delete root;
        return result;
    }
};

int main() {
    vector<vector<char>> board = {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}
    };

    vector<string> words = {"oath", "pea", "eat", "rain"};

    Solution solution;
    vector<string> result = solution.findWords(board, words);

    for (const string& word : result)
        cout << word << '\n';

    return 0;
}