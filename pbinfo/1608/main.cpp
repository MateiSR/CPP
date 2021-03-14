#include <fstream>

using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int n, v[1001], d[1001], nr, i, j, aux, e, dv, x, p, b, OK;
int main()
{
    fin >> n;
    for (i = 1; i <= n; i++) {
        fin >> v[i];
        x = v[i];
        nr = 1;
        b = 2;
        while (b * b <= x) {
            p = 0;
            while (x % b == 0) {
                x = x / b;
                p++;
            }
            nr = nr * (p + 1);
            b++;
        }
        if (x > 1)
            nr = nr * 2;
        d[i] = nr;
    }

    do {
        OK = 1;
        for (i = 1; i < n; i++)
            if (d[i] < d[i + 1] or d[i] == d[i + 1] and v[i] > v[i + 1]) {
                swap(d[i], d[i + 1]);
                swap(v[i], v[i + 1]);
                OK = 0;
            }
    } while (OK == 0);
    for (i = 1; i <= n; i++)
        fout << v[i] << " ";
    return 0;
}