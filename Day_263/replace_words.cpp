#include <vector>
#include <string>
using namespace std;

class Solution {
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

    void insert(const string& word) {
        TrieNode* node = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];
        }

        node->isEnd = true;
    }

public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        root = new TrieNode();

        for (const string& word : dictionary)
            insert(word);

        return sentence;
    }
};