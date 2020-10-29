#include <iostream>
using namespace std;

int main()
{
    int a, b, i, n;
    cin >> a >> b;
    if (a < b)
        n = b;
    else
        n = a;
    for (i = 1; i <= n; i++)
    {
<<<<<<< HEAD
        if (a % i == 0 && b % i == 0)
=======
        if (a % i == 0 and b % i == 0)
>>>>>>> 439f54f947390f92316f64903178ba626e19396d
        {
            cout << i << " ";
        }
    }
}