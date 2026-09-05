/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
    int idx=0;
    for (int i=0; i<numsSize; i++) {
        if (idx<k||nums[i]!=nums[idx-k]) {
            nums[idx]=nums[i];
            idx++;
        }
    }
    *returnSize=idx;
    int* res=(int*)malloc(idx*sizeof(int));
    for (int i=0; i<idx; i++) {
        res[i]=nums[i];
    }
    return res;
}