// bsort de la 1
void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=1; i<n-j+1; i++)
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}

// bsort de la 0 
void bSort(int a[], int n){
    bool ok=true;
    int j=0;
    while(ok){
        ok=false;
        j++;
        for(int i=0; i<n-j; i++)
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), ok=true;
    }
}