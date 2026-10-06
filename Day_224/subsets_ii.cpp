#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {1, 2, 2};

void generate(int index, vector<int> current) {
    if (index == nums.size()) {
        cout << "[ ";

        for (int x : current)
            cout << x << " ";

        cout << "]" << endl;
        return;
    }

    generate(index + 1, current);

    current.push_back(nums[index]);

    generate(index + 1, current);
}

int main() {
    generate(0, {});

    return 0;
}