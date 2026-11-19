#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
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
    string current;

    int getIndex(char c) {
        return c == ' ' ? 26 : c - 'a';
    }

    void insert(const string& sentence) {
        TrieNode* node = root;

        for (char c : sentence) {
            int index = getIndex(c);

            if (!node->children[index])
                node->children[index] = new TrieNode();

            node = node->children[index];

            if (find(node->sentences.begin(),
                     node->sentences.end(),
                     sentence) == node->sentences.end()) {
                node->sentences.push_back(sentence);
            }
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
        if (c == '#') {
            frequency[current]++;
            insert(current);
            current.clear();
            return {};
        }

        current += c;

        TrieNode* node = root;

        for (char ch : current) {
            int index = getIndex(ch);

            if (!node->children[index])
                return {};

            node = node->children[index];
        }

        vector<string> result = node->sentences;

        sort(result.begin(), result.end(), [&](const string& a, const string& b) {
            if (frequency[a] != frequency[b])
                return frequency[a] > frequency[b];

            return a < b;
        });

        if (result.size() > 3)
            result.resize(3);

        return result;
    }
};