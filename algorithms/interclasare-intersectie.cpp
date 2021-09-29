int i = 0, j = 0;
p = 0;
while(i <= n && j <= m)
    if(a[i]<b[j])
        c[p++] = a[i++];
    else if(a[i] > b[j])
        c[p++] = b[j++];
    else // daca este egal, nu se repeta (i++ sau j++, irelevant)
        i++;
while(i <= n)
    c[p++] = a[i++];
while(j <= m)
    c[p++] = b[j++];
