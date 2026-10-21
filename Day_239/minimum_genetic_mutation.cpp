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

int minMutation(string startGene, string endGene,
                vector<string>& bank) {
    unordered_set<string> allowed(bank.begin(), bank.end());

    if (startGene == endGene)
        return 0;

    if (!allowed.count(endGene))
        return -1;

    queue<pair<string, int>> q;
    q.push({startGene, 0});

    unordered_set<string> visited;
    visited.insert(startGene);

    while (!q.empty()) {
        auto [gene, steps] = q.front();
        q.pop();

        if (gene == endGene)
            return steps;

        for (const string& next : allowed) {
            if (!visited.count(next) && differsByOne(gene, next)) {
                visited.insert(next);
                q.push({next, steps + 1});
            }
        }
    }

    return -1;
}

int main() {
    vector<string> bank = {
        "AACCGGTA", "AACCGCTA", "AAACGGTA"
    };

    cout << minMutation("AACCGGTT", "AAACGGTA", bank) << '\n';
    return 0;
}