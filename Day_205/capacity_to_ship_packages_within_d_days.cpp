#include <bits/stdc++.h>
using namespace std;

bool canShip(vector<int>& weights, int days, int capacity) {
    int current = 0;
    int usedDays = 1;

    for (int w : weights) {
        if (current + w > capacity) {
            usedDays++;
            current = 0;
        }

        current += w;
    }

    return usedDays <= days;
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canShip(weights, days, mid))
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout << "Minimum capacity: " << left << endl;

    return 0;
}