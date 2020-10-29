#include <iostream>
using namespace std;
int main()
{
    int n, d, a, v[1000];
    bool ok = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int j = 0; j < n; j++)
    {
        a = v[j];
        if (a < 2)
            ok = true;
        if (a % 2 == 0 && a != 2)
            ok = true;
        if (ok != true)
            for (d = 3; d * d <= a; d++)
            {
                if (a % d == 0)
                {
                    ok = true;
                    if (d * d < a)
                        break;
                }
            }
        if (ok)
            cout << a << " ";
        ok = false;
    }
}