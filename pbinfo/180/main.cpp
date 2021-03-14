#include <iostream>

using namespace std;
int nr, i, j, Max, Min, poz1, poz2, aux;
long long a[1001], ca;
int main()
{
    cin >> nr;
    for (i = 1; i <= nr; i++)
        cin >> a[i];
    Max = 0;
    for (i = 1; i <= nr; i++) {
        if (a[i] > Max) {
            Max = a[i];
            poz2 = i;
        }
    }
    Min = a[1];
    for (i = 2; i <= nr; i++) {
        if (a[i] < Min) {
            Min = a[i];
            poz1 = i;
        }
    }
    if (poz1 < poz2) {
        for (i = poz1; i < poz2; i++) {
            for (j = i + 1; j <= poz2; j++) {
                if (a[i] > a[j]) {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
        }
    }
    else if (poz1 > poz2) {
        for (i = poz2; i < poz1; i++) {
            for (j = i + 1; j <= poz1; j++) {
                if (a[i] > a[j]) {
                    aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
            }
        }
    }
    for (i = 1; i <= nr; i++)
        cout << a[i] << " ";
    return 0;
}