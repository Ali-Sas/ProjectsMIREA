#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> seats(55, 0);
    for (int i = 0; i < N; ++i) {
        int seat;
        cin >> seat;
        if (seat > 36) {
            seat = 55 - seat + 36;
        }
        seats[seat] = 1;
    }
    int max_coupe = 0;
    int current_coupe = 0;
    for (int i = 1; i <= 9; ++i) {
        if (seats[4*i-3] && seats[4*i-2] && seats[4*i-1] && seats[4*i] && seats[37+2*i-2] && seats[37+2*i-1]) {
            current_coupe++;
            max_coupe = max(max_coupe, current_coupe);
        } else {
            current_coupe = 0;
        }
    }
    cout << max_coupe << endl;
}
