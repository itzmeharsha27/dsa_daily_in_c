#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
using namespace std;

bool differsByOne(const string& a, const string& b) {
    int differences = 0;

    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            differences++;

    return differences == 1;
}

int ladderLength(string beginWord, string endWord,
                 vector<string>& wordList) {
    unordered_set<string> words(wordList.begin(), wordList.end());

    if (!words.count(endWord))
        return 0;

    queue<pair<string, int>> q;
    q.push({beginWord, 1});

    unordered_set<string> visited;
    visited.insert(beginWord);

    while (!q.empty()) {
        auto [word, steps] = q.front();
        q.pop();

        if (word == endWord)
            return steps;

        for (const string& next : words) {
            if (!visited.count(next) && differsByOne(word, next)) {
                visited.insert(next);
                q.push({next, steps + 1});
            }
        }
    }

    return 0;
}

int main() {
    vector<string> words = {
        "hot", "dot", "dog", "lot", "log", "cog"
    };

    cout << ladderLength("hit", "cog", words) << '\n';
    return 0;
}