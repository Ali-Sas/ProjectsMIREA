#include <iostream>
using namespace std;

int main() {
    long N, M;
    cin >> N >> M;
    long rectangles = N * (N + 1) * M * (M + 1) / 4;
    cout << rectangles << endl;
}
