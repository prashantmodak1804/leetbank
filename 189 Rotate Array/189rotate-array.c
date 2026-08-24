void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    int* ans=(int*)malloc(sizeof(int)*numsSize);
    for (int i=0; i<numsSize; i++) {
        if (i+k>=numsSize) {
            ans[i+k-numsSize]=nums[i];
        }
        else {
            ans[i+k]=nums[i];
        }
    }
    for (int i=0; i<numsSize; i++) {
        nums[i]=ans[i];
    }
    free(ans);
}