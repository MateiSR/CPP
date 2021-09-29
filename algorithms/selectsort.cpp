int n, X[100];
//citire X[] cu n elemente
for(int i = 0 ; i < n - 1 ; i ++)
    for(int j = i + 1 ; j < n ; j ++)
        if(X[i] > X[j])
        {
            int aux = X[i];
            X[i] = X[j];
            X[j] = aux;
        }
