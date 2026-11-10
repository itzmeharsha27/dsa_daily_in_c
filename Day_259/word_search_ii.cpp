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

public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {
        for (string word : words)
            insert(word);

        return {};
    }
};