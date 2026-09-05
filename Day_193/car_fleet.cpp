#include <bits/stdc++.h>
using namespace std;

int main() {
    int target = 12;

    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};

    vector<pair<int, int>> cars;

    for (int i = 0; i < position.size(); i++)
        cars.push_back({position[i], speed[i]});

    sort(cars.begin(), cars.end());

    for (auto car : cars)
        cout << car.first << " " << car.second << endl;

    return 0;
}