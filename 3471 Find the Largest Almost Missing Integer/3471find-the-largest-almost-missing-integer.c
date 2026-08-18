int largestInteger(int* nums, int numsSize, int k) {
    int seenCount[51]={0};
    for (int i=0; i<=numsSize-k; i++) {
        int seen[51]={0};
        for (int j=i; j<i+k; j++) {
            seen[nums[j]]=1;
        }
        for (int l=0; l<=50; l++) {
            if (seen[l]) {
                seenCount[l]++;
            }
        }
    }
    int ans=-1;
    for (int l=50; l>=0; l--) {
        if (seenCount[l]==1) {
            ans=l;
            break;
        }
    }
    return ans;
}