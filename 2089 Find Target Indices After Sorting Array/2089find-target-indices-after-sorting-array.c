/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int scount=0;
    int freq=0;
    for (int i=0; i<numsSize; i++) {
        if (nums[i]<target) {
            scount++;
        }
        else if (nums[i]==target) {
            freq++;
        }
    }
    *returnSize=freq;
    int *ans=(int*)malloc(sizeof(int)*freq);
    for (int i=0; i<freq; i++) {
        ans[i]=scount++;
    }
    return ans;
}