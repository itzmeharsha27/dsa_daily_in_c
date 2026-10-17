#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<char>> board = {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}
    };

    vector<string> words = {"oath", "pea", "eat", "rain"};

    cout << "Board:\n";
    for (auto& row : board) {
        for (char ch : row)
            cout << ch << ' ';
        cout << '\n';
    }

    cout << "\nWords to search:\n";
    for (const string& word : words)
        cout << word << '\n';

    return 0;
}