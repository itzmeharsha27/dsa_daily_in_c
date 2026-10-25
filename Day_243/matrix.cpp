#include <iostream>
using namespace std;

int main() {
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    int r = 1, c = 1;

    for (int i = 0; i < 4; i++)
        cout << r + dr[i] << ", " << c + dc[i] << '\n';

    return 0;
}