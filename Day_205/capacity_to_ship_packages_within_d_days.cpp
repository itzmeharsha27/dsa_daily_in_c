#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int total = 0;

    for (int w : weights)
        total += w;

    cout << "Total weight: " << total << endl;

    return 0;
}