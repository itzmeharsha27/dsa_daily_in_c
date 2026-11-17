#include <string>
#include <vector>
using namespace std;

class MagicDictionary {
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

    bool dfs(TrieNode* node, const string& word, int index, bool changed) {
        if (index == word.size())
            return changed && node->isEnd;

        int current = word[index] - 'a';

        // Keep the current character.
        if (node->children[current] &&
            dfs(node->children[current], word, index + 1, changed))
            return true;

        // Change the current character.
        if (!changed) {
            for (int i = 0; i < 26; i++) {
                if (i == current || !node->children[i])
                    continue;

                if (dfs(node->children[i], word, index + 1, true))
                    return true;
            }
        }

        return false;
    }

public:
    MagicDictionary() {
        root = new TrieNode();
    }

    void buildDict(vector<string> dictionary) {
        for (const string& word : dictionary)
            insert(word);
    }

    bool search(string searchWord) {
        return dfs(root, searchWord, 0, false);
    }
};