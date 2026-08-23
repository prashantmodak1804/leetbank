int largestInteger(int n, int s) {
    if (s > n * 9) {
        return -1;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int digit = (s >= 9) ? 9 : s;
        res = res * 10 + digit;
        s -= digit;
    }
    return res;
}