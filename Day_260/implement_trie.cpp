#include <string>
using namespace std;

class Trie {
    struct TrieNode {
        TrieNode* children[26];

        TrieNode() {
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (node->children[index] == nullptr)
                node->children[index] = new TrieNode();

            node = node->children[index];
        }
    }

    bool search(string word) {
        return false;
    }

    bool startsWith(string prefix) {
        return false;
    }
};