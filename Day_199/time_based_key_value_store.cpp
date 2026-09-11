#include <bits/stdc++.h>
using namespace std;

class TimeMap {
    map<string, vector<pair<int, string>>> data;

public:
    void set(string key, string value, int timestamp) {
        data[key].push_back({timestamp, value});
    }
};

int main() {
    TimeMap obj;

    obj.set("foo", "bar", 1);
    obj.set("foo", "bar2", 4);

    cout << "Values stored";

    return 0;
}