#include <iostream>
using namespace std;

int main()
{
    int n, s1, s2, s3;
    cin >> n;

    s1 = s2 = s3 = n / 3;
    if (n % 3 == 1)
    {
        s3 += 1;
    }
    else if (n % 3 == 2)
    {
        s3 += 1;
        s2 += 1;
    }
    cout << s1 << " " << s2 << " " << s3 << " ";

    return 0;
}