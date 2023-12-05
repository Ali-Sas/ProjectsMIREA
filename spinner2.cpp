#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;
  

    if (M % 3 == 0) {
        cout << M / 3 << " " << 0 << endl;
    } else if (M % 4 == 0) {
        cout << 0 << " " << M / 4 << endl;
    } else if (M > 4 && (M - 4) % 3 == 0) {
        cout << (M - 4) / 3 << " " << 1 << endl;
    } else {
        cout << 0 << " " << 0 << endl;
    }

}
