#include <iostream>

using namespace std;

// Numarul direct!!!
int main() {
    int n, x = 0, p = 1;
    cin >> n;
    while (n != 0) {
        if (n) x += p * (n % 10);
        p *= 10;
        n = n /10;
    }
    cout << x;
}
