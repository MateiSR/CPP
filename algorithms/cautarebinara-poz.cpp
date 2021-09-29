int cautare(int elem, int a[], int st, int dr) {
        while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == elem)
            return mij;
        else if(a[mij] < elem)
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return -1;
}
