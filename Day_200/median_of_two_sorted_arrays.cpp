#include <bits/stdc++.h>
using namespace std;

double findMedian(vector<int>& A, vector<int>& B) {

    if (A.size() > B.size())
        return findMedian(B, A);

    int m = A.size();
    int n = B.size();

    int left = 0;
    int right = m;

    while (left <= right) {

        int cutA = left + (right - left) / 2;
        int cutB = (m + n + 1) / 2 - cutA;

        cout << "cutA = " << cutA
             << ", cutB = " << cutB << endl;

        break;
    }

    return 0;
}

int main() {
    vector<int> A = {1, 3};
    vector<int> B = {2};

    findMedian(A, B);

    return 0;
}