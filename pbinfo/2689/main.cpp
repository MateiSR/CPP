#include <iostream>

using namespace std;

int main()
{

    int n, v[1000];
    bool pal = true;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> v[i];
        cout << v[i];
    }
    cout << "\n";
    n -= 1;
    for (int j = 0; j <= n / 2; j++)
    {
        if (v[j] != v[n - j])
        {
            pal = false;
            break;
        }
    }
    if (pal == true)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}