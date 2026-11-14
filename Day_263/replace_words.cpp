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

public:
    string replaceWords(vector<string> & dictionary, string sentence) {
        TrieNode* root = new TrieNode();

        return sentence;
    }
};