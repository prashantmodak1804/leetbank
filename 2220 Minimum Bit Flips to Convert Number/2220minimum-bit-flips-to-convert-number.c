int minBitFlips(int start, int goal) {
    int xor_res=start^goal;
    int flips=0;
    while (xor_res>0) {
        flips+=xor_res&1;
        xor_res>>=1;
    }
    return flips;
}