#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[1001], v[1001], p = 0;
    cin >> n;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < k; i++) {
        p = 0;
        for (int j = i; j < n; j += k) {
            v[p] = a[j];
            p++;
        }
        sort(v, v + p);
        p = 0;
        for (int j = i; j < n; j += k) {
            a[j] = v[p];
            p++;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}