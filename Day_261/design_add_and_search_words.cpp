#include <string>
using namespace std;

class WordDictionary {
    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            isEnd = false;

            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root;

    bool dfs(TrieNode* node, const string& word, int index) {
        if (index == word.size())
            return node->isEnd;

        char ch = word[index];

        if (ch == '.') {
            for (int i = 0; i < 26; i++) {
                if (node->children[i] &&
                    dfs(node->children[i], word, index + 1)) {
                    return true;
                }
            }

            return false;
        }

        int childIndex = ch - 'a';

        if (node->children[childIndex] == nullptr)
            return false;

        return dfs(node->children[childIndex],
                   word,
                   index + 1);
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (node->children[index] == nullptr)
                node->children[index] = new TrieNode();

            node = node->children[index];
        }

        node->isEnd = true;
    }

    bool search(string word) {
        return dfs(root, word, 0);
    }
};