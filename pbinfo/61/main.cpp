#include <iostream>
using namespace std;

int main()
{
    int a, b, i, n;
    cin >> a >> b;
    if (a < b)
        n = b;
    else
        n = a;
    for (i = 1; i <= n; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            cout << i << " ";
        }
    }
}