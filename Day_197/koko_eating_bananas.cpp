#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int speed) {

        long long hours = 0;

        for (int bananas : piles)
            hours += (bananas + speed - 1) / speed;

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left <= right) {

            int speed = left + (right - left) / 2;

            if (canFinish(piles, h, speed))
                right = speed - 1;
            else
                left = speed + 1;
        }

        return left;
    }
};

int main() {
    Solution s;

    vector<int> piles = {3, 6, 7, 11};

    cout << s.minEatingSpeed(piles, 8);

    return 0;
}