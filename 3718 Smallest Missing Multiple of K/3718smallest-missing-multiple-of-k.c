int missingMultiple(int* nums, int numsSize, int k) {
    int freq[101]={0};
    for (int i=0; i<numsSize; i++) {
        freq[nums[i]]=1;
    }
    for (int i=k; ; i=i+k) {
        if (i>100||freq[i]==0) {
            return i;
        }
    }
}