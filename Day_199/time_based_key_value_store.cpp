#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, vector<pair<int, string>>> data;

    data["foo"].push_back({1, "bar"});

    cout << data["foo"][0].second;

    return 0;
}