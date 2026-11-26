#include <string>
#include <unordered_map>
using namespace std;

class MapSum {
    unordered_map<string, int> values;

public:
    MapSum() {
    }

    void insert(string key, int val) {
        values[key] = val;
    }

    int sum(string prefix) {
        int total = 0;

        for (const auto& [key, value] : values) {
            if (key.compare(0, prefix.size(), prefix) == 0)
                total += value;
        }

        return total;
    }
};