#include <iostream>
using namespace std;
void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]<a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}
int main() {
    int n, v[1002];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> v[i];
    bSort(v, n);
    for (int i = 1; i <= n; i++) cout << v[i] << " ";
}