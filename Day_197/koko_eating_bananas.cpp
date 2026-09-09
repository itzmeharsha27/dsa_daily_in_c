#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int speed = 4;

    int totalHours = 0;

    for (int bananas : piles)
        totalHours += ceil((double)bananas / speed);

    cout << totalHours;

    return 0;
}