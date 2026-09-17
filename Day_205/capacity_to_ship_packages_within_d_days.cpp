#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int current = 0, usedDays = 1;

        for (int w : weights) {
            if (current + w > capacity) {
                usedDays++;
                current = 0;
            }
            current += w;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canShip(weights, days, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left;
    }
};

int main() {
    Solution s;

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};

    cout << s.shipWithinDays(weights, 5);

    return 0;
}