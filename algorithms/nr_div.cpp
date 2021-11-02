int nrdiv(int n) {
    int cnt = 0;
    for (int d = 1; d  * d <= n; d++) {
        if (n % d == 0) cnt++; // d - divizor a lui n
        if (d * d < n) cnt ++; // n / d - divizor a lui n
    }
    return cnt;
}
