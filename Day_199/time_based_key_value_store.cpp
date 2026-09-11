#include <bits/stdc++.h>
using namespace std;

class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> data;

public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        data[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {

        if (!data.count(key))
            return "";

        vector<pair<int, string>>& values = data[key];

        int left = 0;
        int right = values.size() - 1;
        string answer = "";

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (values[mid].first <= timestamp) {
                answer = values[mid].second;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return answer;
    }
};

int main() {
    TimeMap obj;

    obj.set("foo", "bar", 1);
    obj.set("foo", "bar2", 4);

    cout << obj.get("foo", 3) << endl;

    return 0;
}