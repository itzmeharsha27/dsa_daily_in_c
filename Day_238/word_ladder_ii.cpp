#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
using namespace std;

int main() {
    string beginWord = "hit";
    string endWord = "cog";

    vector<string> wordList = {
        "hot", "dot", "dog", "lot", "log", "cog"
    };

    unordered_set<string> words(wordList.begin(), wordList.end());
    queue<string> q;

    q.push(beginWord);
    words.erase(beginWord);

    int level = 1;
    bool found = false;

    while (!q.empty() && !found) {
        int size = q.size();

        while (size--) {
            string word = q.front();
            q.pop();

            if (word == endWord) {
                found = true;
                break;
            }

            for (int i = 0; i < word.size(); i++) {
                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {
                    word[i] = ch;

                    if (words.count(word)) {
                        q.push(word);
                        words.erase(word);
                    }
                }

                word[i] = original;
            }
        }

        if (!found)
            level++;
    }

    cout << "Shortest transformation length: "
         << (found ? level :  0) << '\n';

    return 0;
}