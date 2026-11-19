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

    int getIndex(char c) {
        if (c == ' ')
            return 26;

        return c - 'a';
    }

    void insert(const string& sentence) {
        TrieNode* node = root;

        for (char c : sentence) {
            int index = getIndex(c);

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];
            node->sentences.push_back(sentence);
        }
    }

public:
    AutocompleteSystem(vector<string>& sentences, vector<int>& times) {
        root = new TrieNode();

        for (int i = 0; i < sentences.size(); i++) {
            frequency[sentences[i]] = times[i];
            insert(sentences[i]);
        }
    }

    vector<string> input(char c) {
        return {};
    }
};