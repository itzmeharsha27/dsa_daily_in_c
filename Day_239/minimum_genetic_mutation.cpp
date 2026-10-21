#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minMutation(string startGene, string endGene,
                    vector<string>& bank) {
        if (startGene == endGene)
            return 0;

        unordered_set<string> allowed(bank.begin(), bank.end());

        if (!allowed.count(endGene))
            return -1;

        queue<string> q;
        q.push(startGene);
        allowed.erase(startGene);

        string bases = "ACGT";
        int mutations = 0;

        while (!q.empty()) {
            int levelSize = q.size();

            while (levelSize--) {
                string gene = q.front();
                q.pop();

                if (gene == endGene)
                    return mutations;

                for (int i = 0; i < gene.size(); i++) {
                    char original = gene[i];

                    for (char base : bases) {
                        if (base == original)
                            continue;

                        gene[i] = base;

                        auto it = allowed.find(gene);

                        if (it != allowed.end()) {
                            q.push(gene);
                            allowed.erase(it);
                        }
                    }

                    gene[i] = original;
                }
            }

            mutations++;
        }

        return -1;
    }
};