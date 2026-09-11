#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, vector<pair<int, string>>> data;

    data["foo"].push_back({1, "bar"});
    data["foo"].push_back({4, "bar2"});

    for (auto p : data["foo"])
        cout << p.first << " " << p.second << endl;

    return 0;
}