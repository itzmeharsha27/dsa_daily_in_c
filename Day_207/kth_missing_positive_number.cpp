#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
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

        return left + k;
    }
};

int main() {
    Solution s;

    vector<int> a = {2,3,4,7,11};
    vector<int> b = {1,2,3,4};
    vector<int> c = {2};

    cout << s.findKthPositive(a, 5) << endl;
    cout << s.findKthPositive(b, 2) << endl;
    cout << s.findKthPositive(c, 1) << endl;

    return 0;
}