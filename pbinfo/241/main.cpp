#include <fstream>
using namespace std;
ifstream cin("interclasare.in");
ofstream cout("interclasare.out");

int main() {
    int n, m, a[100000], b[100000];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0, c[200000];
    int p = 0;
    while(i < n && j < m)
        if(a[i] < b[j])
            c[p ++] = a[i ++];
        else
            c[p ++] = b[j ++];
    while(i < n)
        c[p ++] = a[i ++];
    while(j < m)
        c[p ++] = b[j ++];
    int cnt = 0;
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
        
        if (++cnt == 10) { 
            cout << "\n";
            cnt = 0;
        }
        
        }
    }
