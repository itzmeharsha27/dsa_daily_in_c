#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
    struct TrieNode {
        TrieNode* children[26];
        vector<string> suggestions;

        TrieNode() {
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

            if (node->suggestions.size() < 3)
                node->suggestions.push_back(word);
        }
    }

public:
    vector<vector<string>> suggestedProducts(
        vector<string>& products,
        string searchWord
    ) {
        root = new TrieNode();

        sort(products.begin(), products.end());

        for (const string& product : products)
            insert(product);

        vector<vector<string>> answer;
        TrieNode* node = root;

        for (char ch : searchWord) {
            if (!node) {
                answer.push_back({});
                continue;
            }

            int index = ch - 'a';

            if (!node->children[index]) {
                node = nullptr;
                answer.push_back({});
            } else {
                node = node->children[index];
                answer.push_back(node->suggestions);
            }
        }

        return answer;
    }
};