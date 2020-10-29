#include <iostream>
using namespace std;

int main()
{
    long long int x, nr1 = 0, nr2 = 0;
    cin >> x;
    while (x > 0)
    {
        if (x % 2 == 1)
            nr1++;
        else
            nr2++;
        x /= 2;
    }
    cout << nr2 << " " << nr1;
    return 0;
}