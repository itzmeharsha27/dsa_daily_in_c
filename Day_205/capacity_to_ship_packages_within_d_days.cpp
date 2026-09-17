#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    for (int capacity = left; capacity <= right; capacity++) {
        int current = 0;
        int usedDays = 1;

        for (int w : weights) {
            if (current + w > capacity) {
                usedDays++;
                current = 0;
            }
            current += w;
        }

        if (usedDays <= days) {
            cout << "Minimum capacity: " << capacity << endl;
            break;
        }
    }

    return 0;
}