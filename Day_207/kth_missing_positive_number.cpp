#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int missing = arr[mid] - (mid + 1);

        if (missing < k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << "Position: " << left << endl;

    return 0;
}