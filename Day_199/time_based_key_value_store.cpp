#include <bits/stdc++.h>
using namespace std;

class TimeMap {
    map<string, vector<pair<int, string>>> data;

public:
    void set(string key, string value, int timestamp) {
        data[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {

        if (!data.count(key))
            return "";

        string answer = "";

        for (auto p : data[key]) {
            if (p.first <= timestamp)
                answer = p.second;
            else
                break;
        }

        return answer;
    }
};

int main() {
    TimeMap obj;

    obj.set("foo", "bar", 1);
    obj.set("foo", "bar2", 4);

    cout << obj.get("foo", 3);

    return 0;
}