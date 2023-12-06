#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    priority_queue<int> pq;
    pq.push(N);

    int left = 0, right = 0;
    for (int i = 0; i < K; ++i) {
        int len = pq.top();
        pq.pop();
        left = len / 2;
        right = len - left - 1;
        pq.push(left);
        pq.push(right);
    }

    cout << min(left, right) << " " << max(left, right) << endl;

}
