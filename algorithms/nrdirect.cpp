#include <iostream>

using namespace std;

// Numarul direct!!!
int main() {
    int n, x = 0, k = 1;
    cin >> n;
    do {
        if (n) x += k * (n % 10);
        k *= 10;
        n = n /10;
    } while (n != 0);
    cout << x;
}
