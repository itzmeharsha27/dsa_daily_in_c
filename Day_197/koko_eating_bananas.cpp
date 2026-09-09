#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    while (left <= right) {

        int speed = left + (right - left) / 2;

        int hours = 0;

        for (int bananas : piles)
            hours += ceil((double)bananas / speed);

        if (hours <= h)
            right = speed - 1;
        else
            left = speed + 1;
    }

    cout << left;

    return 0;
}