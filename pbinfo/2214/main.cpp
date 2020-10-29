#include <iostream>
using namespace std;

int main()
{
    int a, c_a, b, c_b, num_a = 0, num_b = 0, contor = 0; // c_a & c_b and are copies of the a&b ints
    cin >> a >> b;
    c_a = a;
    c_b = b;
    while (c_a != 0)
    {
        num_a += 1;
        c_a /= 10;
    }
    while (c_b != 0)
    {
        num_b += 1;
        c_b /= 10;
    }
    if (num_a != num_b)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA" << endl;
        c_a = a;
        c_b = b;
        while (c_a != 0 && c_b != 0)
        {
            if (c_a % 10 == c_b % 10)
                contor += 1;
            c_a /= 10;
            c_b /= 10;
        }
        cout << contor;
    }
    return 0;
}