#include <string>
using namespace std;

class Trie {
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

    TrieNode* findNode(const string& str) {
        TrieNode* node = root;

        for (char ch : str) {
            int index = ch - 'a';

            if (node->children[index] == nullptr)
                return nullptr;

            node = node->children[index];
        }

        return node;
    }

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

        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = findNode(word);

        return node != nullptr && node->isEnd;
    }

    bool startsWith(string prefix) {
        return findNode(prefix) != nullptr;
    }
};