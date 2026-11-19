#include <string>
#include <vector>
#include <unordered_map>
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
    unordered_map<string, int> frequency;

public:
    AutocompleteSystem(vector<string>& sentences, vector<int>& times) {
        root = new TrieNode();

        for (int i = 0; i < sentences.size(); i++)
            frequency[sentences[i]] = times[i];
    }

    vector<string> input(char c) {
        return {};
    }
};