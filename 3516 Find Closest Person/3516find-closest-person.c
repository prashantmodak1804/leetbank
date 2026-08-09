int findClosest(int x, int y, int z) {
    int ans;
    int dxz=abs(z-x);
    int dyz=abs(z-y);
    if (dxz<dyz) {
        ans=1;
    }
    else if (dxz>dyz) {
        ans=2;
    }
    else {
        ans=0;
    }
    return ans;
}