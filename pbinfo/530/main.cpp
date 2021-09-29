#include <iostream>
using namespace std;

int main() {
    int n, m, a[100001], b[100001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    
    // interclasare
    int i = 0, j = 0, c[200001];
    int p = 0;
    while(i < n && j < m)
        if(a[i] < b[j])
            c[p ++] = a[i ++];
        else
            if(a[i] > b[j])
                    c[p++] = b[j++];
        else 
            i++;
            
    while(i < n)
        c[p ++] = a[i ++];
    while(j < m)
        c[p ++] = b[j ++];
    
    for (int i = 0; i < p; i++) cout << c[i] << " ";
    
    cout << "\n";
    
    // intersectia
    int k = 0, d[100001];
    i = 0, j = 0;
    
    while (i < n && j < m) 
        if (a[i] == b[j])
            d[k++] = a[i], i++, j++;
        else
            if (a[i] < b[j])
                i++;
            else
                j++;
    
    for (int i = 0; i < k; i++) cout << d[i] << " ";
    
    }
    
