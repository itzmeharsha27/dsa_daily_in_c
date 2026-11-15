#include <vector>
#include <string>
using namespace std;

class Solution {
    struct TrieNode {
        TrieNode* children[26];

        TrieNode() {
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

public:
    vector<vector<string>> suggestedProducts(
        vector<string>& products,
        string searchWord
    ) {
        TrieNode* root = new TrieNode();

        return {};
    }
};