#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int maxArea = 0;

    for (int i = 0; i < heights.size(); i++) {
        int minHeight = heights[i];

        for (int j = i; j < heights.size(); j++) {
            minHeight = min(minHeight, heights[j]);

            int width = j - i + 1;
            maxArea = max(maxArea, minHeight * width);
        }
    }

    cout << maxArea;

    return 0;
}