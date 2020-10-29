#include <iostream>

using namespace std;
long long n, p = 1, a, b;
int main()
{
    cin >> n >> a >> b;
    while (n > 0 && p < b)
    {
        if (p >= a)
        {
            cout << p << ' ';
            n--;
        }
        p *= 2;
    }
}