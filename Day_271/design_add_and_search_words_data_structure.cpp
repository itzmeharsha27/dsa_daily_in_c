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

    bool searchHelper(TrieNode* node, const string& word, int index) {
        if (index == word.size())
            return node->isEnd;

        return false;
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int i = ch - 'a';

            if (node->children[i] == nullptr)
                node->children[i] = new TrieNode();

            node = node->children[i];
        }

        node->isEnd = true;
    }

    bool search(string word) {
        return searchHelper(root, word, 0);
    }
};