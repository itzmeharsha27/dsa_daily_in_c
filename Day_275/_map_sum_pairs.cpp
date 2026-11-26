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
        return 0;
    }
};