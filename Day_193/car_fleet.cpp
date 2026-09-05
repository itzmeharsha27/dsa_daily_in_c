#include <bits/stdc++.h>
using namespace std;

int main() {
    int target = 12;

    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};

    for (int i = 0; i < position.size(); i++) {
        double time = (double)(target - position[i]) / speed[i];
        cout << time << " ";
    }

    return 0;
}