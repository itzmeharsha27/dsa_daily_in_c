#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int i = 5;

    int leftMax = 0;
    int rightMax = 0;

    for (int j = 0; j <= i; j++)
        leftMax = max(leftMax, height[j]);

    for (int j = i; j < height.size(); j++)
        rightMax = max(rightMax, height[j]);

    int water = min(leftMax, rightMax) - height[i];

    cout << "Water at index " << i << ": " << water;

    return 0;
}