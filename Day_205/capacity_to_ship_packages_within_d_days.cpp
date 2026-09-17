#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int capacity = 15;

    int current = 0;
    int usedDays = 1;

    for (int w : weights) {
        if (current + w > capacity) {
            usedDays++;
            current = 0;
        }

        current += w;
    }

    cout << "Days required: " << usedDays << endl;

    return 0;
}