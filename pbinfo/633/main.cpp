#include <iostream>
using namespace std;
int v[1005];
int main()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
            c1++;
        if (v[i] % 2 == 1)
            c2++;
    }
    if (c1 > c2)
        cout << c1 - c2;
    else
        cout << c2 - c1;
}