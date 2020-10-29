#include <iostream>
#include <cmath>
using namespace std;

long long i, n;

int main()
{
    cin >> n;
    if (n == 1)
    {
        cout << 2;
        return 0;
    }
    if (n % 2 == 0)
        n++;
    else
        n += 2;

    while (true)
    {

        if (n % 2 == 0)
        {
            cout << 2;
            break;
        }

        if (n > 1)
        {
            for (i = 3; i <= sqrt(n); i = i + 2)
                if (n % i == 0)
                {
                    break;
                }

            if (i > sqrt(n))
            {
                break;
            }
        }
        n += 2;
    }
    cout << n;
}