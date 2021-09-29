#include <iostream>
using namespace std;
bool found(int elem, int a[], int st, int dr) {
        while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == elem)
            return 1;
        else if(a[mij] < elem)
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return 0;
}
int main() {
    int x[25000], y[200000], n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> y[i];
    
    for (int j = 0; j < m; j++) {
        if (found(y[j], x, 0, n)) cout << 1 << " ";
        else cout << 0 << " ";
    }
}
