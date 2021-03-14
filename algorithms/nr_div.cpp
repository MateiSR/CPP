int nrdiv(int n) {
    int cnt = 0;
    for (int d = 1; d  * d <= n; d++) {
        if (n % d == 0) cnt++;
        if (d * d < n) cnt ++;
    }
    return cnt;
}