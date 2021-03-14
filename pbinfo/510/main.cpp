#include <iostream>

using namespace std;

bool prim(int n)
{
    if (n == 0 || n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int d = 3; d * d <= n; d = d + 2)
        if (n % d == 0)
            return 0;
    return 1;
}

void bSort(int a[], int n)
{
    bool ok = true;
    int j = 0;
    while (ok) {
        ok = false;
        j++;
        for (int i = 1; i < n - j + 1; i++)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]), ok = true;
    }
}

int main()
{
    int v[1002], n, p[1002], cnt = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (prim(v[i])) p[++cnt] = v[i];
    }

    bSort(p, cnt);

    for (int i = 1; i <= cnt; i++) cout << p[i] << " ";
    return 0;
}