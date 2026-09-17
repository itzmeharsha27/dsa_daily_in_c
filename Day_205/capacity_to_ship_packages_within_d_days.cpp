#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int maximum = *max_element(weights.begin(), weights.end());

    cout << "Maximum package weight: " << maximum << endl;

    return 0;
}