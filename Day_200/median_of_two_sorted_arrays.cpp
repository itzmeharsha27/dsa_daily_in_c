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

        int leftA = (cutA == 0) ? INT_MIN : A[cutA - 1];
        int rightA = (cutA == m) ? INT_MAX : A[cutA];

        int leftB = (cutB == 0) ? INT_MIN : B[cutB - 1];
        int rightB = (cutB == n) ? INT_MAX : B[cutB];

        if (leftA <= rightB && leftB <= rightA) {
            cout << "Correct partition found";
            return 0;
        }

        if (leftA > rightB)
            right = cutA - 1;
        else
            left = cutA + 1;
    }

    return 0;
}

int main() {
    vector<int> A = {1, 3};
    vector<int> B = {2};

    findMedian(A, B);

    return 0;
}