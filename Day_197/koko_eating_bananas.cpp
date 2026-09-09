#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    for (int speed = 1; speed <= 11; speed++) {

        int hours = 0;

        for (int bananas : piles)
            hours += ceil((double)bananas / speed);

        if (hours <= h) {
            cout << "Minimum speed: " << speed;
            break;
        }
    }

    return 0;
}