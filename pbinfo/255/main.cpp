#include <iostream>

using namespace std;

int main()
{
    long long n, i, f1, f2, f3;
    cin >> n;
    f1 = f2 = 1;
    cout << f1 << " ";
    if (n != 1)
    {
        cout << f2 << " ";
        for (i = 1; i < n - 1; i++)
        {
            f3 = f1 + f2;
            cout << f3 << " ";
            f1 = f2;
            f2 = f3;
        }
    }

    return 0;
}