#include <iostream>
using namespace std;

int main() {
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    int row = 1, col = 1;

    for (int i = 0; i < 8; i++) {
        cout << row + dr[i] << ", "
             << col + dc[i] << '\n';
    }

    return 0;
}