#include <bits/stdc++.h>
using namespace std;

int main() {
    int target = 12;

    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};

    vector<pair<int, double>> cars;

    for (int i = 0; i < position.size(); i++) {
        double time = (double)(target - position[i]) / speed[i];
        cars.push_back({position[i], time});
    }

    sort(cars.rbegin(), cars.rend());

    double lastTime = 0;

    for (auto car : cars) {
        if (car.second > lastTime) {
            lastTime = car.second;
            cout << "New fleet: " << lastTime << endl;
        }
    }

    return 0;
}