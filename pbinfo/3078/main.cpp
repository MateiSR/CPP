#include <iostream>

using namespace std;

int main()
{

    long long n, k, e = 0, P = 1, c;
    cin >> n >> k;
    while (n != 0)
    {
        c = n % 10;
        if (c != k)
        {
            P *= c;
            e = 1;
        }
        n /= 10;
    }
    if (e == 0)
        cout << 0;
    else
        cout << P;
}