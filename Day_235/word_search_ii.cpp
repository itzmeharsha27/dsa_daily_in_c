#include <iostream>
#include <vector>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEnd;

    TrieNode() : isEnd(false) {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

int main() {
    TrieNode root;

    root.children['o' - 'a'] = new TrieNode();
    root.children['o' - 'a']->children['a' - 'a'] = new TrieNode();

    cout << boolalpha
         << (root.children['o' - 'a'] != nullptr) << '\n';

    return 0;
}