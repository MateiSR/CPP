    p = 0;
    i = 1 , j = 1;
    while(i <= n && j <= m)
        if(a[i] < b[j])
            i++;
        else
            if(a[i] > b[j])
                j++;
            else
                c[++p] = a[i], i++, j++;
