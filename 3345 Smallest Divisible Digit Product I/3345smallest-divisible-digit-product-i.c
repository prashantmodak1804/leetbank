int smallestNumber(int n, int t) {
    int f=0;
    while (f!=1) {
        int m=n;
        int prod=1;
        while (m>0) {
            prod*=m%10;
            m/=10;
        }
        if (prod%t==0) {
            return n;
            f=1;
        }
        n++;
    }
    return 0;
}