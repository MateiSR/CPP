#include <iostream>
using namespace std;

int main()
{
    int n, i, j, oglindit = 0, v[100];
    bool not_found;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int copy = v[0];
    while (copy != 0)
    {
        oglindit = oglindit * 10 + copy % 10;
        copy /= 10;
    }
    for (j = 1; j < n; j++)
    {
        if (v[j] == oglindit)
        {
            not_found = false;
            break;
        }
        else
        {
            not_found = true;
        }
    }
    if (not_found == false)
        cout << "DA";
    else
        cout << "NU";
}