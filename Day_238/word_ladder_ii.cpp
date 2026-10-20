#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main() {
    string beginWord = "hit";
    string endWord = "cog";

    vector<string> wordList = {
        "hot", "dot", "dog", "lot", "log", "cog"
    };

    unordered_set<string> words(wordList.begin(), wordList.end());

    if (!words.count(endWord)) {
        cout << "No transformation exists\n";
        return 0;
    }

    queue<string> q;
    q.push(beginWord);
    words.erase(beginWord);

    unordered_map<string, vector<string>> parents;
    bool found = false;

    while (!q.empty() && !found) {
        int size = q.size();
        unordered_set<string> usedThisLevel;

        while (size--) {
            string word = q.front();
            q.pop();

            for (int i = 0; i < word.size(); i++) {
                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {
                    if (ch == original)
                        continue;

                    word[i] = ch;

                    if (words.count(word)) {
                        parents[word].push_back(q.empty() ? "" : "");
                        parents[word].back() = "";
                        parents[word].pop_back();

                        parents[word].push_back(
                            string(1, original) + "|" + word.substr(0, i) +
                            word.substr(i + 1)
                        );

                        usedThisLevel.insert(word);

                        if (word == endWord)
                            found = true;
                        else
                            q.push(word);
                    }
                }

                word[i] = original;
            }
        }

        for (const string& word : usedThisLevel)
            words.erase(word);
    }

    cout << "BFS parent relationships collected\n";
    return 0;
}