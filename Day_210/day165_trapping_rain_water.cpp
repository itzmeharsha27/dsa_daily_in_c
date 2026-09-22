#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int total = 0;

    for (int i = 0; i < height.size(); i++) {
        int leftMax = 0;
        int rightMax = 0;

        for (int j = 0; j <= i; j++)
            leftMax = max(leftMax, height[j]);

        for (int j = i; j < height.size(); j++)
            rightMax = max(rightMax, height[j]);

        total += min(leftMax, rightMax) - height[i];
    }

    cout << "Trapped water: " << total;

    return 0;
}