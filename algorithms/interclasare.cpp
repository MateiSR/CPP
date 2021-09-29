int n,a[100000], m , b[100000], p, c[200000];

//citire a[] cu n elemente
//citire b[] cu m elemente

int i = 0 , j = 0;
p = 0;
while(i < n && j < m)
    if(a[i] < b[j])
        c[p ++] = a[i ++];
    else
        c[p ++] = b[j ++];
while(i < n)
    c[p ++] = a[i ++];
while(j < m)
    c[p ++] = b[j ++];
