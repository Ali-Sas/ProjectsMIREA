#include <iostream>
#include <vector>

using namespace std;

void perestanovka(vector<int>& balls, int i, int n, int& count) {
    if (i == n) {
        for (int j = 0; j < n; ++j) {
            if (balls[j] == j + 1) {
                ++count;
                break;
            }
        }
    } else {
        for (int j = i; j < n; ++j) {
            swap(balls[i], balls[j]);
            perestanovka(balls, i + 1, n, count);
            swap(balls[i], balls[j]);
        }
    }
}

int main() {
    int n = 3;
    vector<int> balls(n);
    for (int i = 0; i < n; ++i) {
        balls[i] = i + 1;
    }
    int count = 0;
    perestanovka(balls, 0, n, count);
    cout << "Общее количество ситуаций: " << count << endl;
    return 0;
}
