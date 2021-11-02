#include <iostream>
int main()
{
    int n;
    std :: cin >> n;
    for(int d =1 ; d * d <= n ; d ++ )
        if(n % d == 0)
        {
            std :: cout << d << " ";
            if(d * d < n) // dacă d != sqrt(n)
                std :: cout << n / d << " ";
        }
    return 0;
}
