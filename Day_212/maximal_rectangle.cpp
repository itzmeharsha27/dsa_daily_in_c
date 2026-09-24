#include <bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int>& height) {
    int n = height.size();
    int best = 0;

    for (int i = 0; i < n; i++) {
        int minimum = height[i];

        for (int j = i; j < n; j++) {
            minimum = min(minimum, height[j]);
            best = max(best, minimum * (j - i + 1));
        }
    }

    return best;
}

int main() {
    vector<int> height = {2,1,5,6,2,3};

    cout << largestRectangle(height);

    return 0;
}