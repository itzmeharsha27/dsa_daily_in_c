#include <string>
using namespace std;

class MapSum {
    struct TrieNode {
        TrieNode* children[26];
        int value;

        TrieNode() {
            value = 0;

            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root;

public:
    MapSum() {
        root = new TrieNode();
    }

    void insert(string key, int val) {
        TrieNode* node = root;

        for (char ch : key) {
            int index = ch - 'a';

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];
        }

        node->value = val;
    }

    int sum(string prefix) {
        return 0;
    }
};