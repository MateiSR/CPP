#include <iostream>
using namespace std;
int main()
{
    long long n, i, j, v[1005];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (j = 0; j < n; j++)
    {
        if (v[j] % v[n - 1] == 0)
            cout << v[j] << " ";
    }
    return 0;
}