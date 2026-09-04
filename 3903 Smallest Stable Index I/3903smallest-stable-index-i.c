int firstStableIndex(int* nums, int numsSize, int k) {
    for (int i=0; i<numsSize; i++) {
        int max=0;
        int min=nums[i];
        for (int j=0; j<=i; j++) {
            if (nums[j]>max) {
                max=nums[j];
            }
        }
        for (int l=i; l<numsSize; l++) {
            if (nums[l]<min) {
                min=nums[l];
            }
        }
        if ((max-min)<=k) {
            return i;
        }
    }
    return -1;
}