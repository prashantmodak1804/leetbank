/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int* ans=malloc(sizeof(int)*(numsSize));
    for (int i=0; i<numsSize; i++) {
        int f=0;
        for (int j=i+1; j<numsSize; j++) {
            if ((nums[i]&1)!=(nums[j]&1)) {
                f++;
            }
        }
        ans[i]=f;
    }
    return ans;
}