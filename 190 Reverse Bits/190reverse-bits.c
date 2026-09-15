int reverseBits(int n) {
    int sum=0;
    for (int i=0; i<32; i++) {
        sum=sum*2+(n%2);
        n/=2;
    }
    return sum;
}