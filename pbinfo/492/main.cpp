#include <iostream>

using namespace std;

int main()
{

    int v[200], n, nr1, nr2, c = 0, r;
    cin >> n;
    for (int g = 0; g <= n - 1; g++)
        cin >> v[g];
    if (n % 2 == 0)
    {
        for (int j = 0; j <= n / 2 - 1; j++)
        {

            nr1 = v[j];
            nr2 = v[n - 1 - j];
            r = nr1 % nr2;
            while (nr1 % nr2 != 0)
            {
                nr1 = nr2;
                nr2 = r;
                r = nr1 % nr2;
            }
            if (nr2 == 1)
                c++;
        }
    }
    else
    {
        for (int j = 0; j <= (n - 1) / 2; j++)
        {
            nr1 = v[j];
            nr2 = v[n - 1 - j];
            r = nr1 % nr2;
            while (nr1 % nr2 != 0)
            {
                nr1 = nr2;
                nr2 = r;
                r = nr1 % nr2;
            }
            if (nr2 == 1)
                c++;
        }
    }
    cout << c;
}