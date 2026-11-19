#include <string>
#include <vector>
using namespace std;

class AutocompleteSystem {
    struct TrieNode {
        TrieNode* children[27];
        vector<string> sentences;

        TrieNode() {
            for (int i = 0; i < 27; i++)
                children[i] = nullptr;
        }
    };

    TrieNode* root;

public:
    AutocompleteSystem(vector<string>& sentences, vector<int>& times) {
        root = new TrieNode();
    }

    vector<string> input(char c) {
        return {};
    }
};