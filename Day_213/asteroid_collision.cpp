#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> asteroids = {5, 10, -5};

    for (int i = 0; i < asteroids.size() - 1; i++) {
        if (asteroids[i] > 0 && asteroids[i + 1] < 0) {
            cout << "Collision possible between ";
            cout << asteroids[i] << " and " << asteroids[i + 1];
        }
    }

    return 0;
}