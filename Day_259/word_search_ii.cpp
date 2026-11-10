#include <vector>
#include <string>
using namespace std;

class Solution {
    struct TrieNode {
        TrieNode* children[26];
        string word;

        TrieNode() {
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };

public:
    vector<string> findWords(vector<vector<char>>& board,
                             vector<string>& words) {
        return {};
    }
};