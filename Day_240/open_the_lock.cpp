#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
using namespace std;

int openLock(vector<string>& deadends, string target) {
    unordered_set<string> blocked(deadends.begin(), deadends.end());

    if (blocked.count("0000"))
        return -1;

    queue<pair<string, int>> q;
    unordered_set<string> visited;

    q.push({"0000", 0});
    visited.insert("0000");

    while (!q.empty()) {
        auto [combination, moves] = q.front();
        q.pop();

        if (combination == target)
            return moves;

        for (int i = 0; i < 4; i++) {
            for (int direction : {1, -1}) {
                string next = combination;
                int digit = (next[i] - '0' + direction + 10) % 10;
                next[i] = digit + '0';

                if (!blocked.count(next) && !visited.count(next)) {
                    visited.insert(next);
                    q.push({next, moves + 1});
                }
            }
        }
    }

    return -1;
}

int main() {
    vector<string> deadends = {
        "0201", "0101", "0102", "1212", "2002"
    };

    cout << openLock(deadends, "0202") << '\n';
    return 0;
}