#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEnd;

    TrieNode() : isEnd(false) {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

void insert(TrieNode* root, const string& word) {
    TrieNode* node = root;

    for (char ch : word) {
        int index = ch - 'a';

        if (!node->children[index])
            node->children[index] = new TrieNode();

        node = node->children[index];
    }

    node->isEnd = true;
}

bool search(TrieNode* root, const string& word) {
    TrieNode* node = root;

    for (char ch : word) {
        int index = ch - 'a';

        if (!node->children[index])
            return false;

        node = node->children[index];
    }

    return node->isEnd;
}

int main() {
    TrieNode root;

    insert(&root, "oath");
    insert(&root, "eat");

    cout << boolalpha << search(&root, "oath") << '\n';
    cout << boolalpha << search(&root, "pea") << '\n';

    return 0;
}