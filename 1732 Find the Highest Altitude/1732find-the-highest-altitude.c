int largestAltitude(int* gain, int gainSize) {
    int max=0;
    int alt=0;
    for (int i=0; i<gainSize; i++) {
        alt+=gain[i];
        if (alt>max) {
            max=alt;
        }
    }
    return max;
}