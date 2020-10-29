#include <iostream>
using namespace std;
int main()
{
    int n, i, j, counter1 = 0, mare = 0, mic = 1000001, dif, v[1000];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (mare < v[i])
        {
            mare = v[i];
        }
        if (mic > v[i])
        {
            mic = v[i];
        }
    }

    dif = mare - mic;

    for (j = 0; j < n; j++)
    {
        if (v[j] == dif)
        {
            counter1 += 1;
        }
    }

    cout << counter1;
}