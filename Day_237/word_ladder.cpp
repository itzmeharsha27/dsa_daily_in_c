#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string beginWord = "hit";
    string endWord = "cog";

    vector<string> wordList = {
        "hot", "dot", "dog", "lot", "log", "cog"
    };

    cout << "Begin: " << beginWord << '\n';
    cout << "End: " << endWord << '\n';

    for (const string& word : wordList)
        cout << word << '\n';

    return 0;
}