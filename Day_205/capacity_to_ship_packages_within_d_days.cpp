#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout << "Packages: ";
    for (int w : weights)
        cout << w << " ";

    cout << "\nDays: " << days << endl;

    return 0;
}