#include <iostream>

using namespace std;
int main()
{
    int n, x, frecv[10] = {}, cif, j = 0;
    for (int k = 0; k <= 9; k++)
        frecv[k] = 0;
    bool dif = true;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> x;
        while (x != 0)
        {
            cif = x % 10;
            if (frecv[cif] == 0)
                frecv[cif]++;
            else
            {
                cout << "NU";
                dif = false;
                break;
            }
            x /= 10;
        }
        if (dif == false)
            break;
        else
        {
            for (j = 0; j <= 9; j++)
                frecv[j] = 0;
        }
    }
    if (dif)
        cout << "DA";
}