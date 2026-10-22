#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int openLock(vector<string>& deadends, string target) {
    unordered_set<string> unavailable(deadends.begin(), deadends.end());

    if (unavailable.count("0000"))
        return -1;

    if (target == "0000")
        return 0;

    if (unavailable.count(target))
        return -1;

    queue<string> q;
    q.push("0000");
    unavailable.insert("0000");

    int moves = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        while (levelSize--) {
            string combination = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                for (int direction : {1, -1}) {
                    string next = combination;
                    int digit = (next[i] - '0' + direction + 10) % 10;
                    next[i] = digit + '0';

                    if (unavailable.count(next))
                        continue;

                    if (next == target)
                        return moves + 1;

                    unavailable.insert(next);
                    q.push(next);
                }
            }
        }

        moves++;
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