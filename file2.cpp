#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void task() {
    ifstream input("numbers.txt");
    ofstream primes("primes.txt");

    vector<int> numbers;
    int number;

    while (input >> number) {
        numbers.push_back(number);
        if (isPrime(number)) {
            primes << number << '\n';
        }
    }

    int min_gcd = numbers[0];
    int max_gcd = numbers[0];

    for (const auto num : numbers) {
        min_gcd = gcd(min_gcd, num);
        max_gcd = max(max_gcd, num);
    }

    cout << "Наименьший общий делитель: " << min_gcd << '\n';
    cout << "Наибольший общий делитель: " << max_gcd << '\n';
}

int main(){
    task();
}
